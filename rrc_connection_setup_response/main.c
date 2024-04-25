#include <stdio.h>
#include <sys/types.h>

#include "rrc_request.h"

int main() {
    uint8_t *buffer;
    ssize_t len;
    RRCConnectionRequestCoder(&buffer, &len);
    tx_send(&buffer, &len);
    
    return 0;
}
