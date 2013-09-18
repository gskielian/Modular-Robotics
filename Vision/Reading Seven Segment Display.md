Reading Seven Segment Displays
=============================


Many sensors do not have a simple way to plug directly into them -- and even when there is a way to hack it, it often involves mad-surface-mount soldering skills.

Simply reading a seven segment diplay allows one to share one's tools with the robot and have the "hey, can you do this for me?" kind of feel.

While normal black-and-white text is easy, seven-segment displays are super hard for bots!


Thankfully and thanks to the creators of ssocr, there is a way we can give our bots this essential skill.

### Installation Of Seven-Segment-Optical-Character-Recognition (ssocr)

First we must install the dependencies:


```bash
sudo apt-get install libimlib2 libimlib2-dev
```

Next we make the project:
```bash
make
```
that was simple
