//
// Created by ahmad on 26/05/21.
//

#include <iostream>
#include "Vision.h"

void Vision::setCamera(Camera *camera) {
    _currentCamera = camera;
}

void Vision::processImage() {
    std::cout << "Camera path: " + _currentCamera->getCameraPath() << std::endl;
}