RasPiCam
========

### Setting up the Camera

In this implementation, you should first [install the raspberry pi camera](http://thepihut.com/pages/how-to-install-the-raspberry-pi-camera).

### Installing Software

Afterwards we need to enter the following into the terminal to install the tesseract-ocr (Optical Character Recognition software):

```bash
sudo apt-get install tesseract-ocr
```

I recommend installing **imagemagick** which will allow us to fine tune the images and get the most out of tesseract:

```bash
sudo apt-get install imagemagick
```

### Taking an image, and grabbing the text

To take an image with the raspicam type the following:

```bash
raspistill -o image_name.jpg
```

Then we can use tesseract to grab the text data into a file:

```bash

```

We can summarize these actions in one line:
```bash

```
