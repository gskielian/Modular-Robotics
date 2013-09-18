#requires installation of python-alsaaudio (sudo apt-get install python-alsaaudio works for ubuntu 12.04)

import alsaaudio, sys

m = alsaaudio.Mixer()

#set the volume 0-100

#Example: Set the volume to 50%
#m.setvolume(50)

#we use sys.argv to get command line argument
m.setvolume(sys.argv[1])

#Example, from bash you can type `python ControlVolumne.py 100` to turn volume to the max (then run an espeak)

# use the following line to get the volume
# vol = m.getvolume()
