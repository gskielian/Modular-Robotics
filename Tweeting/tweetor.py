import subprocess
tweet = 'type your message here'
subprocess.call('twitter -e youremailaddress@email.com set %s' % tweet, shell=True)
