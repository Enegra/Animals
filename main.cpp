#include <iostream>
#include "Dog.h"
#include "Pack.h"
#include "Cat.h"

int main() {
    Dog dog = Dog();
    Cat cat = Cat();
//    dog.makeSound();
    Pack pack = Pack();
    pack+dog;
    pack+cat;
    pack.makeSound();
    Pack newPack = Pack();
    newPack+cat;
    newPack.makeSound();
    pack-newPack;
    pack.makeSound();
    
    return 0;
}