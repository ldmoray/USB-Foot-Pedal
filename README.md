# USB-Foot-Pedal

## TLDR:
Literally just this tutorial:
https://learn.sparkfun.com/tutorials/pro-micro--fio-v3-hookup-guide/introduction

Parts used:
https://www.sparkfun.com/products/12640 
https://www.sparkfun.com/products/11570
https://kinesis-ergo.com/shop/1-pedal-for-savant-elite2-jsb/
A bread board, some wires, and a cardboard box.

Code:
foot_pedal.ino is the Arduino script.
Pro_Micro_Build.bat is a slightly modified version of the code from https://forum.sparkfun.com/viewtopic.php?f=96&t=53770 that I managed to get working for me.

Instructions for the board:
If I connected the sleeve to Ground and the Tip to pin 9, then pressed the pedal the signal read 0, and released it read HIGH.

## Why
* Cost, mostly: the official Savant Elite2 controller is like 5 times the price of the parts.
* It was fun, a little: I wanted an excuse to play with an Arduino, and here one was.
