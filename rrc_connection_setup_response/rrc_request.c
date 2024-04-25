#include "rrc_request.h"

#include <arpa/inet.h>
#include <conversions.h>
#include <net/if.h>
#include <netdb.h>
#include <netinet/in.h>
#include <netinet/sctp.h>
#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
#include <time.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

#define asn1cSeqAdd(VaR, PtR) \
    if (asn_sequence_add(VaR, PtR) != 0) assert(0)

void RRCConnectionRequestCoder(uint8_t **buffer, ssize_t *len){
    srand(time(NULL));
    //UL_CCCH_Message_t msg; //да ну его

    RRCConnectionRequest_t *request;
    request = (RRCConnectionRequest_t*)calloc(1, sizeof(RRCConnectionRequest_t));

    request -> criticalExtensions.present = RRCConnectionRequest__criticalExtensions_PR_rrcConnectionRequest_r8;

    request -> criticalExtensions.choice.rrcConnectionRequest_r8.establishmentCause = EstablishmentCause_mo_Signalling;

    uint8_t *spare = (uint8_t*)calloc(1, 1);
    *spare = 0;

    request -> criticalExtensions.choice.rrcConnectionRequest_r8.spare.buf = spare;
    request -> criticalExtensions.choice.rrcConnectionRequest_r8.spare.size = 1;
    request -> criticalExtensions.choice.rrcConnectionRequest_r8.spare.bits_unused = 0;

    request -> criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.present = InitialUE_Identity_PR_randomValue;

    uint8_t *vals = (uint8_t*)calloc(5, 1);

    for (int i = 0; i < 5; i++){
        vals[i] = rand() % 256;
    }

    request -> criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.randomValue.buf = vals;
    request -> criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.randomValue.size = 5;
    request -> criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.randomValue.bits_unused = 0;

    asn_encode_to_new_buffer_result_t res = {NULL, {0, NULL, NULL}};
    res = asn_encode_to_new_buffer(NULL, ATS_CANONICAL_XER, &asn_DEF_RRCConnectionRequest, request);

    //asn_decode(NULL, ATS_CANONICAL_XER, &asn_DEF_RRCConnectionRequest, request, buffer, len);

    /*Если честно, я не понял, зачем два раза кодировать данные, и на втором разе у меня вылезала
    какая-то ошибка с полем BIT_STRING, мб память где-то неправильно выделилась на .buf, ну короче
    я и не кодирую ATS_ALIGNED_CANONICAL_PER. Я не очень хорош в чистом си.*/

    //printf("%d\n", sizeof(res));
    //printf("%d\n", strlen(res.buffer));
    //free(res.buffer);
    //memset(&res, 0, sizeof(res));
    //res = asn_encode_to_new_buffer(NULL, ATS_ALIGNED_CANONICAL_PER, &asn_DEF_RRCConnectionRequest, request);

    *buffer = res.buffer;
    *len = res.result.encoded;

    if (*buffer == NULL) {
        fprintf(stderr, "Error enconing rrc buffer\n");
        exit(1);
    } else {
        fprintf(stderr, "Encoded buffer\n");
    }

    xer_fprint(stdout, &asn_DEF_RRCConnectionRequest, request);

    
}

void tx_send(uint8_t **buffer, ssize_t *len) {
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

    ret = sctp_sendmsg(sockfd, *buffer, *len, NULL, 0, 0, 0, 0, 0, 0);
    if (ret < 0) {
        printf("Error when sending msg\n");
        exit(1);
    }
    printf("Sent packet\n");

    memset(buffer, 0, sizeof(buffer));

    ret = sctp_recvmsg(sockfd, *buffer, BUFFER_SIZE, NULL, 0, 0, 0);
        // Print the received data
        
    printf("Received data:\n%s\n", *buffer);
        // Reset buffer for the next read



    //char resp[BUFFER_SIZE];
    //ssize_t valread = read(sockfd, buffer, BUFFER_SIZE);
    //if (valread > 0) {
    //    printf("Response from server: %s\n", buffer);
    //} else {
    //    printf("No response received from server.\n");
    //}

    close(sockfd);
}