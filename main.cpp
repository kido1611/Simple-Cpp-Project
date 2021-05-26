#include <iostream>
#include <csignal>
#include <unistd.h>

#include "Camera.h"
#include "OmniCamera.h"
#include "Vision.h"
#include "FrontCamera.h"
#include "Serial.h"

void signalHandler(int signum) {
    std::cout << "Signal was received" << std::endl;

    std::cout << "Doing something" << std::endl;

    exit(signum);
}

int main() {
    signal(SIGTERM, signalHandler);
    signal(SIGINT, signalHandler);

    std::cout << "Hello, World!" << std::endl;

    Camera::print();

    OmniCamera omni;
    omni.printCameraPath();
    omni.getIndex();

    std::cout << "Vision Access" << std::endl;
    Vision vision{};
    vision.setCamera(&omni);
    vision.processImage();

    std::cout << "Vision from front camera" << std::endl;
    FrontCamera frontCamera;
    Vision frontVision{};
    frontVision.setCamera(&frontCamera);
    frontVision.processImage();

    Serial arduino{};
    arduino.setBaudRate(115200);
    arduino.init();

    std::cout << "Running program in loop" << std::endl;

#pragma clang diagnostic push
#pragma ide diagnostic ignored "EndlessLoop"
    while (true) {
        sleep(10);
    }
#pragma clang diagnostic pop

    return 0;
}
