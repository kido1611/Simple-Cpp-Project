//
// Created by ahmad on 27/05/21.
//

#ifndef MAIN_FRONTCAMERA_H
#define MAIN_FRONTCAMERA_H

#include "Camera.h"

class FrontCamera : public Camera {
public:
    std::string getCameraPath() override {
        return "Front camera location path";
    };
};

#endif //MAIN_FRONTCAMERA_H
