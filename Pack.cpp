//
// Created by agnie on 11/22/2016.
//

#include "Pack.h"
#include <algorithm>
#include <iostream>

void Pack::makeSound() {
        for (auto &animal : animals){
            animal->makeSound();
        }
        std::cout<<std::endl;
}

void Pack::operator+(Animal &animal) {
    animals.push_back(&animal);
}

void Pack::operator+(Pack &pack) {
    animals.insert(animals.end(), pack.animals.begin(), pack.animals.end());
}

void Pack::operator-(Animal &animal) {
    animals.erase(std::remove(animals.begin(), animals.end(), &animal), animals.end());
}

void Pack::operator-(Pack &pack) {
    for (auto animal : pack.animals){
        animals.erase(std::remove(animals.begin(), animals.end(), animal), animals.end());
    }
}