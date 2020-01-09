[![Build Status](https://travis-ci.com/tessmero/cmake-arduino.svg?branch=master)](https://travis-ci.com/tessmero/cmake-arduino)

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

## Details

`cmake-ardiuno.ino` is the arduino frontend. It uses the arduino-specific `Serial.print` function to display output. It could be expanded to accomodate additional input/output devices like sensors. It should contain only the bare-minimum amount of code, since it can only be debugged using actual hardware.

`main/main.cpp` is the cross-platform frontend for demonstration purposes. It uses the standard library `iostream` to display output. In this example it is used to make an executable to show that cross-platform compiling works.

The remaining code is the backend. The backend contains all of the meaningful logic. In this example the backend is composed of `square.cpp` and its header,  `square.h`. The back-end would be the target of automated tests. So, in order to safely add complexity, code should be added to the backend.
