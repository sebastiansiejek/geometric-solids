//
//  GeometricSolid.hpp
//  Studia - poprawka
//
//  Created by Sebastian Siejek on 09/09/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#ifndef GeometricSolid_hpp
#define GeometricSolid_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

class GeometricSolid {
private:
    float side;
public:
    GeometricSolid();
    ~GeometricSolid();
    virtual void showVolume() {};
    virtual void showName() {};
};

#endif /* GeometricSolid_hpp */
