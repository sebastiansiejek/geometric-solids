//
//  Cuboid.cpp
//  Studia - poprawka
//
//  Created by Sebastian Siejek on 09/09/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "Cuboid.hpp"

Cuboid::Cuboid(std::string name, float sideA, float sideB, float sideC) {
    this->name = name;
    this->sideA = sideA;
    this->sideB = sideB;
    this->sideC = sideC;
    std::cout << "Constructor of Cuboid class\n";
};

Cuboid::~Cuboid() {
    std::cout << "Deconstructor of Cuboid class\n";
};

float Cuboid::calcVolume() {
    return sideA*sideB*sideC;
};

std::string Cuboid::getName() {
    return this->name;
}

float Cuboid::getSideA() {
    return this->sideA;
}

float Cuboid::getSideB() {
    return this->sideB;
}

float Cuboid::getSideC() {
    return this->sideC;
}

void Cuboid::showVolume() {
    std::cout << "Volume: " << this->calcVolume() << std::endl;
}

void Cuboid::showName() {
    std::cout << "Name: " << this->getName() << std::endl;
}
