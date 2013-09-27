Tweeting
========

After a friend of mine informed me about the ease of tweeting from a robot, I decided to check it out.

It turns out to be super trivial.



The best way to do this I've seen (between curl and python) is python's twitter library.


## Installation

The following command worked for me (you may need to install **easy_install** first)

```python
sudo easy_install twitter
```

## Usage

In order to send a tweet you just need to use your new bash command

```bash
twitter -e youremailaddress@email.com set This is where you type your message
```

But wait, there's more.  You can call this from python using the subprocess module, let's do:

```python
import subprocess
subprocess.call( 'twitter -e youremailaddress@email.com set This is where you type your message', shell=True)
```

or for better readability:

```python
import subprocess
tweet = 'type your message here'
subprocess.call('twitter -e youremailaddress@email.com set %s' % tweet, shell=True)
```



