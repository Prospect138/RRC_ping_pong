rm -r src/*
rm -r build/*
mkdir src
mkdir build
asn1c EUTRA-RRC-Definitions.asn -D src -pdu=RRCConnectionSetup -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps
gcc -g -Isrc -I. -o build/rrc_server main.c rrc_encoders_decoders.c src/*.c -lsctp -DPDU=RRCConnectionSetup -DASN_DISABLE_OER_SUPPORT
./build/rrc_server
