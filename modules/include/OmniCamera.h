//
// Created by ahmad on 26/05/21.
//

#ifndef WARRIOR_OMNICAMERA_H
#define WARRIOR_OMNICAMERA_H

#include "Camera.h"

class OmniCamera : public Camera {
public:
    std::string getCameraPath() override {
        return "Camera Omni";
    }
    void getIndex();
};

#endif //WARRIOR_OMNICAMERA_H
