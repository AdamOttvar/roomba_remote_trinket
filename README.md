# Roomba remote on a Adafruit Trinket
Very simple remote control for Roomba using an Adafruit Trinket.
It is possible to use a variety of microcontrollers, but this is running on an Adafruit Trinket 5V (8 MHz).
This sketch will send the "Clean" three times when powered on and then nothing more.
The ussage is that it will be controlled by a timed outlet that will take care of when the roomba will clean.

## Hardware

* Adafruit Trinket (5V running 8 Mhz) https://www.adafruit.com/product/1501
* IR LED 940nm https://www.electrokit.com/produkt/led-ir-ir333-a-5mm-940nm-20gr-4mw-bla-lins/
* PN2222A Transistor https://www.electrokit.com/produkt/pn2222a-to-92-npn-40v-800ma/
* 220 Ohm Resistor

## Schematic
![Schematic](/images/remote_schematic.png)

## Installation
Make use of Arduino IDE to load onto microcontroller, and make sure that it's set to run on 8 MHz.
