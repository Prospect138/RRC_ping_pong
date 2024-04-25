rm -r src/*
rm -r build/*
mkdir src
mkdir build
asn1c EUTRA-RRC-Definitions.asn -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps
gcc -g -Isrc -I. -o build/rrc_client main.c rrc_request.c src/*.c -lsctp -DPDU=RRCConnectionRequest -DASN_DISABLE_OER_SUPPORT
./build/rrc_client
