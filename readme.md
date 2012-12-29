Proximity Sensing with MPR 121  
==============================  
This sketch uses the MPR121 capacitive sensor IC as a proximity and touch sensor. It was adapted from code developed by Jim Bloom and [published on bildr] (http://bildr.org/2011/05/mpr121_arduino/). We've adapted the code to add the proximity sensing capabilities.
  
* __version__:  1.0.0  
* __author__: Julio Terra from LAB at Rockwell Group  
* __modified__: 12/29/12  
* __contains__: capactivite_prox_sensor_mpr121.ino, mpr121.h

Setting Up The Sketch  
---------------------  

###1. Physical Set-up:  
Refer to the hook-up diagram below taken from the bildr blog post about using the Arduino with the MPR121.
* Add the MPR121 breakout board to a breadboard  
* Hook-up the electrodes to the MPR121 breakout board  
* Connect the Arduino to the MPR121 breakout board   

![Arduino and MPR121 hook-up diagram](https://raw.github.com/labatrockwell/arduino_capactive_sensor_MPR121/master/mpr121.png)

###2. Software Set-up
* Load the sketch on the Arduino  
* Open the serial port at 9600 bauds  

Proximity measurements are cumulative readings from all sensors. Therefore, all sensors must be hooked up correctly in order for this measurement to work properly. The individual sensors will continue to respond to touch events.   

How it Works
------------
When proximity state changes the sketch sends out the appropriate proximity state message:  
```
proximity sensed: 'P:1'
proximity released: 'P:0'
```  
  
When touch state of any button changes the sketch sends out the appropriate touch state messages: 
```  
touch sensed: 'touch_sensor_num:1' ['0:1' .. '11:1']
touch released: 'touch_sensor_num:0' ['0:0' .. '11:0']
```  
    
About the MPR121  
================  
This prototype uses an MR121 IC from Freescale, mounted on a sparkfun proto board which is connected to the Arduino via I2C. Here are some useful links related to the breakout board and IC.
* [Sparkfun MPR121 breakout board product page] (https://www.sparkfun.com/products/9695?)  
* [General documentation page for MPR121] (http://www.freescale.com/webapp/sps/site/prod_summary.jsp?code=MPR121)
* [Proximity sensing application notes for the MPR121] (http://cache.freescale.com/files/sensors/doc/app_note/AN3893.pdf?fpsp=1&WT_TYPE=Application%20Notes&WT_VENDOR=FREESCALE&WT_FILE_FORMAT=pdf&WT_ASSET=Documentation)
	* I used this document to figure out how to configure the MPR121 to enable proximity sensing  
  
License  
=======  
  
The MIT License (MIT)  
Copyright © 2012 LAB at Rockwell Group, http://www.rockwellgroup.com/lab  
  
Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:  
  
The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.  
  
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.  
