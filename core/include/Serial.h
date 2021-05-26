//
// Created by ahmad on 27/05/21.
//

#ifndef MAIN_SERIAL_H
#define MAIN_SERIAL_H

class Serial {
public:
    void init();

    void setBaudRate(int baudRate);

private:
    int _baudRate;
};

#endif //MAIN_SERIAL_H
