#include <iostream>
#include "Camera.h"
#include "OmniCamera.h"
#include "Vision.h"
#include "FrontCamera.h"
#include "Serial.h"

int main() {
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

    return 0;
}
