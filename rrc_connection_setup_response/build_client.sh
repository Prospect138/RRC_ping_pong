gcc -g -Isrc -I. -o build/rrcconnectionrequest main.c rrc_request.c src/*.c -lsctp -DPDU=RRCConnectionRequest -DASN_DISABLE_OER_SUPPORT
