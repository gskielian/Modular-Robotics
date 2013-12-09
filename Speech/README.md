Speech
======

Contents of Folder:
* [ControlVolume.py](ControlVolume.py) - simple python script which allows you to set volume from the terminal
* This README.md - description of project and quick-start "hello world" for espeak


## Description

There are different routes of implementing speech, but the one we will be using most will be espeak (it is easy to place onto a raspberry pi).

(We can also have the robot send calls through services like [Twilio](../SMS-and-PhoneCall/) )

## Installation

Install **espeak** easily on the Raspberry Pi or Debian-based system with the following command:

```bash
sudo apt-get install alsa-utils
sudo apt-get install espeak
```

**IMPORTANT** 

The following sets the output to analog (headphone) output:
```bash
amixer cset numid=3 1
```

If you don't do the above line, you may not be able to get sound from the raspberry pi (because it may, for example, be sending sound data to the hdmi). 

## Usage

Usage of espeak is an simple as the following:

```bash
espeak "hello there"
```

Now on a Raspberry Pi remember to connect speakers.

## Volume Control

There are many ways to control the volume of the system (may want to crank it up before trolling somebody witha an espeak for example).
The way I like to use (which works for Ubuntu 12.04) is the python's `alsaaudio` module.

see [ControlVolume.py](ControlVolume.py) for a simple script with the following usage from the command line:

### Example 1: Controlling volume

(Sets volume to 100)
```bash
python ControlVolume.py 100
```

### Example 2: Turning the volume to max before an espeak:

```bash
python ControlVolume.py 100 ; espeak "Can't mute me, lol"
```
