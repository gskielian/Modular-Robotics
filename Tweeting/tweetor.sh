#!/bin/bash

#1. replace youremailaddress@email.com with your email address
#2. type in the message to tweet (time stamp appended because "twitter python" library doesn't allow repeat messages)

#usage of "twitter" utility:
#twitter -e youremailaddress@email.com set "This is where you type your message"

twitter -e youremailaddress@email.com set "$1 `date +%s`"
