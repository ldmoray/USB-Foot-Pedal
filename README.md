# USB-Foot-Pedal

## TLDR:
Literally just this tutorial:
https://learn.sparkfun.com/tutorials/pro-micro--fio-v3-hookup-guide/introduction

**Parts used:**
* https://www.sparkfun.com/products/12640 
* https://www.sparkfun.com/products/11570
* https://kinesis-ergo.com/shop/1-pedal-for-savant-elite2-jsb/
* A bread board, some wires, and a cardboard box.

**Code:**
* foot_pedal.ino is the Arduino script.
* Pro_Micro_Build.bat is a slightly modified version of the code from https://forum.sparkfun.com/viewtopic.php?f=96&t=53770 that I managed to get working for me.

**Instructions for the board:**
* Connect the Sleeve to Ground
* Connect the Tip to pin 9
* Pressing the Pedal read 0, releasing it read HIGH

## Why
* Cost. The real Savant Elite2 controller is like 5 times the price of the parts.
* Fun. Just an excuse to play with an Arduino.
