Email
=====


This is relatively really easy for a Linux disto.  I've had a lot of luck simply using the `mail` command on Macs and it just works.

But Raspberry Pi's are cool, and this is how you set it up with that:


## Step 0: Getting Vim

`sudo apt-get update && sudo apt-get install vim`

## Step 1: Installation

```bash
sudo apt-get install ssmtp mailutils mpack
``` 

Opening the config file:
```bash
sudo vim /etc/ssmtp/ssmtp.conf
```

Adjust these lines:
```bash
AuthUser=youruserid@gmail.com
AuthPass=userpass
FromLineOverride=YES
mailhub=smtp.gmail.com:587
UseSTARTTLS=YES
```

Step 3: Sending your first email

echo "sample text" | mail -s "Subject" username@domain.tld
