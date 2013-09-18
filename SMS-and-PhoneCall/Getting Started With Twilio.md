
Getting Started With Twilio
===========================

Making an account is free, and they have a well defined free-tier with 1-sms per minute max.

https://www.twilio.com/


## Voice Calls: Text To Speech

It is relatively easy to send calls with robotic-speech



The following is a quote from the twilio apis at https://www.twilio.com/docs/api/rest/making-calls
```python
# Download the Python helper library from twilio.com/docs/python/install
from twilio.rest import TwilioRestClient
 
# Your Account Sid and Auth Token from twilio.com/user/account
account_sid = "AC0fe0e8fdd9426fa3ce3b93edac27e163"
auth_token  = "{{ auth_token }}"
client = TwilioRestClient(account_sid, auth_token)
 
call = client.calls.create(url="http://demo.twilio.com/docs/voice.xml",
    to="+14155551212",
    from_="+14158675309")
print call.sid
```
