//
// Created by ahmad on 27/05/21.
//

#include "Serial.h"
#include "iostream"

void Serial::init() {
    std::cout << "Init Serial using baudrate: " << _baudRate << std::endl;
}

void Serial::setBaudRate(int baudRate) {
    _baudRate = baudRate;
}
