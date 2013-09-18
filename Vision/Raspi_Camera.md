RasPiCam
========

### Setting up the Camera

In this implementation, you should first [install the raspberry pi camera](http://thepihut.com/pages/how-to-install-the-raspberry-pi-camera).

### Installing OCR Software

Afterwards we need to enter the following into the terminal to install the tesseract-ocr (Optical Character Recognition software):

```bash
sudo apt-get install tesseract-ocr
```

### Installing Image Processing Software

I recommend installing **imagemagick** which will allow us to fine tune the images and get the most out of tesseract:

```bash
sudo apt-get install imagemagick
```

### Taking an image, and grabbing the text

To take an image with the raspicam type the following:

```bash
raspistill -o image.jpg
```

if you want to take it with a delay (to adjust the image in the image preview) use the -t option:

```bash
raspistill -t 4000 -o image.jpg
```


Then we can use tesseract to grab the text data into a text file:

```bash
tesseract image.jpg text.txt

```

### Summary -- One-Liner

We can summarize these actions in one line:
```bash
raspistill -t 5000 -o image.jpg ; tesseract image.jpg text.txt; cat text.txt

```
