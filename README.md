# LED-Binary-counter.

## What it does
Counts from 1 to 15 in binary using 4 LEDs. Each LED represents one bit.
Resets back to 0 after 15.

## DEMO:
[Watch demo video](https://youtube.com/shorts/nNuSO2F7A6o?si=JftdsekEQ2i5O_1w)

## Hardware

|  Part  |    Quantity    |
|--      |--              |
|  Arduino Uno R3  |      1      |
|  LEDs(any color)  |    4       |
|Resistors(220Ω/330Ω/390Ω)|    4  |
|Jumper Wires| As many as needed.|

## Circuit
- LED 0 → Pin 2.
- LED 1 → Pin 3.
- LED 2 → Pin 4.
- LED 3 → Pin 5.

## What I learned
- Bit manipulation — extracting individual bits using >> and & 1.
- For loops on hardware.
- Binary number system practically.

## Problems I Faced:
- During my first few tests, whenever i would press any button the count would increment/decrement by 2,3 or even 5 units, basically it would jump from 2 to 5 or 6 to 1 even though i had pressed the respective buttons only once. After googlging this problem I learnt that thais was happening because of debouncing of the pins. To fix this I added a debouncedelay variable that would wait for the debounce to subside before taking the input.
