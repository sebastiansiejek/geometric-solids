//
//  Cylinder.hpp
//  Studia - poprawka
//
//  Created by Sebastian Siejek on 09/09/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#ifndef Cylinder_hpp
#define Cylinder_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "GeometricSolid.hpp"

class Cylinder : public GeometricSolid {
private:
    std::string name;
    const float pi = 3.14;
    float radius;
    float height;
public:
    Cylinder(std::string name, float radius, float height);
    ~Cylinder();
    float calcVolume();
    std::string getName();
    float getRadius();
    float getHeight();
    virtual void showVolume() override;
    virtual void showName() override;
};

#endif /* Cylinder_hpp */
