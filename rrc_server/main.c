#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#define _GNU_SOURCE
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/sctp.h>
#include <unistd.h>
#include <stdbool.h>

#include "rrc_encoders_decoders.h"

#define PORT 36412
#define BUFFER_SIZE 1024



int main() {
    int server_fd, new_socket;
    struct sockaddr_in address;
    int opt = 1;
    int addrlen = sizeof(address);
    uint8_t buffer[BUFFER_SIZE] = {0};

    // create a socket file descriptor
    if ((server_fd = socket(AF_INET, SOCK_STREAM, IPPROTO_SCTP)) == 0) {
        perror("socket failed!");
        exit(EXIT_FAILURE);
    }

    // set socket options
    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt))) {
        perror("setsockopt");
        exit(EXIT_FAILURE);
    }

    // setup the server address
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = inet_addr("127.0.0.99");
    address.sin_port = htons(PORT);

    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {
        perror("bind fails");
        exit(EXIT_FAILURE);
    }

    // start listening for incoming connections
    if (listen(server_fd, 3) < 0) {
        perror("listening failed");
        exit(EXIT_FAILURE);
    }

    // print a message showing that the server is listening on a port
    printf("Server listening on port %d\n", PORT);

    // accept incoming connections
    if ((new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t *)&addrlen)) < 0) {
        perror("accept failed");
        exit(EXIT_FAILURE);
    }

    // accepting the connection
    printf("Connection accepted\n");

    // read data from the client and print it
    ssize_t valread;
    valread = sctp_recvmsg(new_socket, buffer, BUFFER_SIZE,  NULL, 0, 0, 0);
    // Print the received data
    printf("Received data:\n%s\n", buffer);

    RRCConnectionRequest_t* request = 0;
    asn_dec_rval_t decoded;
    decoded = asn_decode(NULL, ATS_CANONICAL_XER, &asn_DEF_RRCConnectionRequest, (void**)&request, buffer, valread);
    if (decoded.code == RC_FAIL){
        printf("Can not decode message.\n");
        exit(1);
    }

    memset(buffer, 0, sizeof(buffer));
    //free(buffer);
    bool is_random = request->criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.present == InitialUE_Identity_PR_randomValue;
    bool is_good_bit = request->criticalExtensions.choice.rrcConnectionRequest_r8.ue_Identity.choice.randomValue.bits_unused == 0;
    
    uint8_t *response_buffer;
    ssize_t response_len;


    if (is_random && is_good_bit){
        RRCConnectionSetupEncoder(&response_buffer, &response_len);
        printf("request formed\n");
    }
    //else {
    //}
    
    // Send the response to the client

    valread = sctp_sendmsg(new_socket, &response_buffer, response_len, NULL, 0, 0, 0, 0, 0, 0);
    if (valread < 0) {
        printf("Error when sending msg\n");
        exit(1);
    }

    //free(response_buffer);


    // close the socket
    close(server_fd);
    return 0;
}