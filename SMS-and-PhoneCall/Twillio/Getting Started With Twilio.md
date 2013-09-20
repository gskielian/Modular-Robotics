Getting Started With Twilio
===========================

Making an account is free, and they have a well defined free-tier with 1-sms per minute max.

https://www.twilio.com/


## Installing Helper Libaries

```bash
pip install twilio
```

Or if the above didn't work:

```bash
easy_install twilio
```

Follow the directions on the python install page of twilio for an example:
https://www.twilio.com/docs/python/install


## Voice Calls: Text To Speech

It is relatively easy to send calls with robotic-speech



The following is a quote from the twilio apis at https://www.twilio.com/docs/api/rest/making-calls

## Sending a Text Message

```python
from twilio.rest import TwilioRestClient

# Your Account Sid and Auth Token from twilio.com/user/account
account_sid = "AC7a7aaf4dad57e4948a8c1f36aaa5073b"
auth_token  = "1159f503b213d0ffb8cf7e16dd8c5d00"
client = TwilioRestClient(account_sid, auth_token)

message = client.sms.messages.create(
    to="+14153333333",    # Replace with your phone number
    from_="+14157777777", # Replace with your Twilio number
    body="hello there!"   #replace with the message  
    ) 
```
