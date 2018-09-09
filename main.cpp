//
//  main.cpp
//  Studia - poprawka
//
//  Created by Sebastian Siejek on 05/09/2018.
//  Copyright © 2018 Sebastian Siejek. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include "GeometricSolid.hpp"
#include "Cube.hpp"
#include "Cuboid.hpp"

std::vector<GeometricSolid*> geometricSolids() {
    
    std::vector<GeometricSolid*> vec;
    
    int switcher = 1;
    while (switcher >= 1) {
        std::cout << "[1] Cubic\n";
        std::cout << "[2] Cuboid\n";
        std::cout << "[3] Cyliner\n";
        std::cout << "[0] End\n";
        std::cout << "Number: ";
        std::cin >> switcher;
        switch (switcher) {
            case 1:
                float side;
                std::cout << "You have chosen: CUBIC\n";
                std::cout << "Side length: ";
                std::cin >> side;
                vec.push_back(new Cube("Cubic", side));
                break;
            case 2:
                float sideA, sideB, sideC;
                std::cout << "You have chosen: Cuboid\n";
                std::cout << "Length of A side: ";
                std::cin >> sideA;
                std::cout << "Length of B side: ";
                std::cin >> sideB;
                std::cout << "Length of C side: ";
                std::cin >> sideC;
                vec.push_back(new Cuboid("Cuboid", sideA, sideB, sideC));
                break;
                
            default:
                break;
        }
    }
    
    return vec;

}

int main(int argc, const char * argv[]) {
 
    for (auto const& value : geometricSolids()) {
        value->showName();
        value->showVolume();
    }

    
    std::cout << std::endl;
    return 0;
}
