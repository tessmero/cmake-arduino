# cmake-arduino
A proof-of-concept Arduino program, where the back-end can be compiled cross-platform using CMake. 

This program computes five squared.

## Why?

Developing Arduino code this way makes the code more accessible, since developers do not need a device to run the code.

Using a standard build tool like CMake opens up the possibility to add unit testing and continuous integration.

## Compile in Arduino

NOTE: tested on Teensy 3.2

1. Clone or download this repository
2. open "cmake-arduino.ino" in the arduino IDE
3. click "verify" to compile the code
4. click "upload" to run the code on a connected device


## Build and Compile with CMake

1. Clone this repository
2. Build with CMake and run the created executable

```
cd cmake-arduino
mkdir build
cd build
cmake ..
make
./cmake-arduino
```
