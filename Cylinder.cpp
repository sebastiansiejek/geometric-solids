//
//  Cylinder.cpp
//  Studia - poprawka
//
//  Created by Sebastian Siejek on 09/09/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "Cylinder.hpp"

Cylinder::Cylinder(std::string name, float radius, float height) {
    this->name = name;
    this->radius = radius;
    this->height = height;
    std::cout << "Constructor of Cube class\n";
};

Cylinder::~Cylinder() {
    std::cout << "Deconstructor of Cube class\n";
};

float Cylinder::calcVolume() {
    return this->getRadius()*this->getRadius()*this->pi*this->getHeight();
};

std::string Cylinder::getName() {
    return this->name;
}

float Cylinder::getRadius() {
    return this->radius;
}

float Cylinder::getHeight() {
    return this->height;
}

void Cylinder::showVolume() {
    std::cout << "Volume: " << this->calcVolume() << std::endl;
}

void Cylinder::showName() {
    std::cout << "Name: " << this->getName() << std::endl;
}
