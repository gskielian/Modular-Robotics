Speech
======

Contents of Folder
* [ControlVolume.py](ControlVolume.py) - simple python script which allows you to set volume from the terminal
* This README.md - getting started, and quick "hello world" for computer speech
*
*
*



There are different routes of implementing speech, but the one we will be using most will be espeak (it is easy to place onto a raspberry pi).


### Installation

Install **espeak** easily on the Raspberry Pi or Debian-based system with the following command:

```bash
sudp apt-get install espeak
```

### Usage

Usage of espeak is an simple as the following:

```bash
espeak "hello there"
```

Now on a Raspberry Pi the 

### Volume Control

There are many ways to control the volume of the system (may want to crank it up before trolling somebody witha an espeak for example).
The way I like to use (which works for Ubuntu 12.04) is the python's `alsaaudio` module.

see [ControlVolume.py](ControlVolume.py) for a simple script with the following usage from the command line:


(Sets volume to 100)
```bash
python ControlVolume.py 100
```

