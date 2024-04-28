# RRC ping pong
This is a task for "НТР" bootcamp. It represents connections of UE and eNB via RRC messages.
# How to use
Install ans1c for using this program. vlm's asn1c is not working good for me, so I used mouse07140 fork:
https://github.com/mouse07410/asn1c

1) At first, run file build_server.sh from /rrc_server. It would build and run server. Keep it in terminal.
2) And then, run file build_client.sh from /rrc_client. It would build and run client.
After this, client would connect to server and they will start to communicate with RRC messages and print some data in cout.
