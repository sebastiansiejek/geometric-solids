//
//  Cube.cpp
//  Studia - poprawka
//
//  Created by Sebastian Siejek on 09/09/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include "Cube.hpp"

Cube::Cube(std::string name, float side) {
    this->name = name;
    this->side = side;
    std::cout << "Constructor of Cube class\n";
};

Cube::~Cube() {
    std::cout << "Deconstructor of Cube class\n";
};

float Cube::calcVolume(float side) {
    return side*side*side;
};

std::string Cube::getName() {
    return this->name;
}

float Cube::getSide() {
    return this->side;
}

void Cube::showVolume() {
    std::cout << "Volume: " << this->calcVolume(getSide()) << std::endl;
}

void Cube::showName() {
    std::cout << "Name: " << this->getName() << std::endl;
}
