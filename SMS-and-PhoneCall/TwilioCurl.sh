curl -X POST https://api.twilio.com/2010-04-01/Accounts/AC7a7abf4dad57e4948a8c1f3679a5073b/Calls.json \
   -u AC7a7abf4dad57e4948a8c1f3679a5073b:1159f503b213d004b8cf7e16dd8c5d00 \
   -d "From=+14152639683" \
   -d "To=+14154652008" \
   -d 'Url=http%3A%2F%2Ftwimlets.com%2Fecho%3FTwiml%3D%253CResponse%253E%253CSay%253EHello%2BGregory%252C%2Bwelcome%2Bto%2BTwilio%2521%253C%252FSay%253E%253C%252FResponse%253E'
