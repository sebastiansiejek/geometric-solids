//
//  Cube.hpp
//  Studia - poprawka
//
//  Created by Sebastian Siejek on 09/09/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#ifndef Cube_hpp
#define Cube_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "GeometricSolid.hpp"

class Cube : public GeometricSolid {
private:
    std::string name;
    float side;
public:
    Cube(std::string name, float side);
    ~Cube();
    float calcVolume(float side);
    std::string getName();
    float getSide();
    virtual void showVolume() override;
    virtual void showName() override;
};

#endif /* Cube_hpp */
