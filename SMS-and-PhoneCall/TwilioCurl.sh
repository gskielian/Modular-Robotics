#!/bin/bash


message=`echo "$3" | sed 's/ /\%2B/g'`

curl -X POST https://api.twilio.com/2010-04-01/Accounts/AC7a7abf4dad57e4948a8c1f3679a5073b/Calls.json \
   -u AC7a7abf4dad57e4948a8c1f3679a5073b:1159f503b213d004b8cf7e16dd8c5d00 \
   -d "From=+'$1'" \
   -d "To=+1415'$2'" \
   -d 'Url=http%3A%2F%2Ftwimlets.com%2Fecho%3FTwiml%3D%253CResponse%253E%253CSay%253E'$message'%2521%253C%252FSay%253E%253C%252FResponse%253E'
