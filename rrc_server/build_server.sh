
asn1c EUTRA-RRC-Definitions.asn -D src -pdu=RRCConnectionSetup -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps
gcc -g -Isrc -I. -o build/s1setuprequest main.c src/*.c -lsctp -DPDU=RRCConnectionSetup -DASN_DISABLE_OER_SUPPORT