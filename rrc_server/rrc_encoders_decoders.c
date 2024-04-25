#include "rrc_encoders_decoders.h"

void RRCConnectionSetupEncoder(uint8_t **response_buffer, ssize_t *len) {

    RRCConnectionSetup_t* setup = NULL;
    setup = (RRCConnectionSetup_t*)calloc(1, sizeof(RRCConnectionSetup_t));
    setup -> criticalExtensions.present = RRCConnectionSetup__criticalExtensions_PR_c1;
    setup -> criticalExtensions.choice.c1.present = RRCConnectionSetup__criticalExtensions__c1_PR_rrcConnectionSetup_r8;

    setup -> criticalExtensions.choice.c1.choice.rrcConnectionSetup_r8.radioResourceConfigDedicated.mac_MainConfig = NULL;
    setup -> criticalExtensions.choice.c1.choice.rrcConnectionSetup_r8.radioResourceConfigDedicated.mac_MainConfig = (MAC_MainConfig_t*)calloc(1, sizeof(MAC_MainConfig_t));
    setup -> criticalExtensions.choice.c1.choice.rrcConnectionSetup_r8.radioResourceConfigDedicated.mac_MainConfig -> present = RadioResourceConfigDedicated__mac_MainConfig_PR_defaultValue;
    setup -> criticalExtensions.choice.c1.choice.rrcConnectionSetup_r8.radioResourceConfigDedicated.mac_MainConfig -> choice.defaultValue = 1;

    //все поля опциональны, кроме мак_конфига



    asn_encode_to_new_buffer_result_t res = {NULL, {0, NULL, NULL}};
    res = asn_encode_to_new_buffer(NULL, ATS_CANONICAL_XER, &asn_DEF_RRCConnectionSetup, setup);

    *response_buffer = res.buffer;
    *len = res.result.encoded;
}