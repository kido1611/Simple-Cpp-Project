//
// Created by ahmad on 26/05/21.
//

#ifndef WARRIOR_VISION_H
#define WARRIOR_VISION_H

#include "Camera.h"

class Vision {
public:
    void setCamera(Camera* camera);
    void processImage();

private:
    Camera *_currentCamera;
};
#endif //WARRIOR_VISION_H
