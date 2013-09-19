Robot Can Send you Email Questions/Updates
==========================================


This is relatively really easy for a Linux disto.  I've had a lot of luck simply using the `mail` command on Macs and it just works.

But Raspberry Pi's are smaller, longer battery life, and fit into a high-altitude weather balloon, and can send email after 3 minutes of set up.


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

## Step 2: Sending your first email

```bash
echo "Hi from your Pi" | mail -s "Title of Email" username@gmail.com
```
