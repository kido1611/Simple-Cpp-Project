//
// Created by ahmad on 26/05/21.
//

#ifndef WARRIOR_CAMERA_H
#define WARRIOR_CAMERA_H

#include <string>

class Camera {
public:
    virtual std::string getCameraPath() = 0;

    static void print();

    void printCameraPath();
};

#endif //WARRIOR_CAMERA_H
