//
// Created by agnie on 11/22/2016.
//

#ifndef ANIMALS_PACK_H
#define ANIMALS_PACK_H


#include <vector>
#include "Animal.h"

class Pack {
private:
    std::vector<Animal*> animals;
public:
    void makeSound();
    void operator+(Animal &animal);
    void operator+(Pack &pack);
    void operator-(Animal &animal);
    void operator-(Pack &pack);
};


#endif //ANIMALS_PACK_H
