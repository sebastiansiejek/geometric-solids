//
//  Cuboid.hpp
//  Studia - poprawka
//
//  Created by Sebastian Siejek on 09/09/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#ifndef Cuboid_hpp
#define Cuboid_hpp


#include <stdio.h>
#include <iostream>
#include <string>
#include "GeometricSolid.hpp"

class Cuboid : public GeometricSolid {
private:
    std::string name;
    float sideA, sideB, sideC;
public:
    Cuboid(std::string name, float sideA, float sideB, float sideC);
    ~Cuboid();
    float calcVolume();
    std::string getName();
    float getSideA();
    float getSideB();
    float getSideC();
    virtual void showVolume() override;
    virtual void showName() override;
};

#endif /* Cuboid_hpp */
