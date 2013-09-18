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

Next we download the ssocr binary from the following site:

http://www.unix-ag.uni-kl.de/~auerswal/ssocr/

Extract it, cd into the directory, then make the project with a simple:
```bash
make
```
...that was simple. For good measure let's also install it into our system for use outside the folder:

```bash
sudo make install
```

### Example/Demo


![Sample Image](http://i1347.photobucket.com/albums/p711/gregorykielian/IRthermometerReadout_zpseff5c474.jpg)

```bash
ssocr crop 190 73 80 100 -d 2 image.jpg -t 20
```
The code above resulted in `19` being placed into standard-out.


### Usage
You will need to make sure that the number of digits is known, and the bounding box for the digits.

#### Notes
* Bounding Box 
  * grab x and y of top-left corner (pixels measured from top-left as per usual)
  * get the width and height in pixels respectively
* Enter the number of digits after `-d`
* Enter the black-white threshold in % after `-t`

```bash
ssocr  crop top_left_x top_left_y width height -d number of digits expected the_image_name.jpg -t black_white_threshold_percent
```
