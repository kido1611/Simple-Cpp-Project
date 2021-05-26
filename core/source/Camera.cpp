//
// Created by ahmad on 26/05/21.
//

#include "Camera.h"
#include <iostream>

void Camera::print() {
    std::cout << "Halo from camera" << std::endl;
}

void Camera::printCameraPath() {
    std::cout << "Camera " + getCameraPath() << std::endl;
}
