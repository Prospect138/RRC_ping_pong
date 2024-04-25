#include <stdio.h>
#include <arpa/inet.h>
#include <net/if.h>
#include <netdb.h>
#include <netinet/in.h>
#include <netinet/sctp.h>
#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
#include "rrc_request.h"
#include <unistd.h>

#include "src/RRCConnectionSetup.h"

#define BUFFER_SIZE 1024

int main() {
    uint8_t *buffer;
    ssize_t len;
    RRCConnectionRequestCoder(&buffer, &len);

    struct sockaddr_in servaddr = {
        servaddr.sin_family = AF_INET,
        servaddr.sin_port = htons(36412),
        servaddr.sin_addr.s_addr = inet_addr("127.0.0.99"),
    };

    int sockfd;

    sockfd = socket(AF_INET, SOCK_STREAM, IPPROTO_SCTP);
    if (sockfd < 0) {
        printf("Error when opening socket\n");
        exit(1);
    }

    int ret = connect(sockfd, (struct sockaddr *)&servaddr, sizeof(servaddr));
    if (ret < 0) {
        printf("Error when connecting socket\n");
        exit(1);
    }

    ret = sctp_sendmsg(sockfd, buffer, len, NULL, 0, 0, 0, 0, 0, 0);
    if (ret < 0) {
        printf("Error when sending msg\n");
        exit(1);
    }
    printf("Sent packet\n");

    free(buffer);

    // вообще стоило бы использовать старый буфер, но я ловлю сегфолты, поэтому пусть останется так
    uint8_t response_buffer[BUFFER_SIZE] = {0};

    ret = sctp_recvmsg(sockfd, response_buffer, BUFFER_SIZE, NULL, 0, 0, 0);
    if (ret < 0) {
        printf("Error when recieving msg\n");
        exit(1);
    }

    printf("Received data:\n%s\n", response_buffer);

    RRCConnectionSetup_t* setup_response = NULL;
    asn_dec_rval_t decoded;

    decoded = asn_decode(NULL, ATS_CANONICAL_XER, &asn_DEF_RRCConnectionSetup, (void**)&setup_response, response_buffer, ret);
    if (decoded.code == RC_FAIL){
        printf("Can not decode ConnectionSetup message.\n");
        exit(1);
    }


    ssize_t complete_len;
    RRCConnectionSetupCompleteCoder(&buffer, &complete_len);

    ret = sctp_sendmsg(sockfd, buffer, complete_len, NULL, 0, 0, 0, 0, 0, 0);
    if (ret < 0) {
        printf("Error when sending msg\n");
        exit(1);
    }
    printf("Connection Setup Complete is sent. End.\n");
    free(buffer);

    close(sockfd);

    return 0;
}
