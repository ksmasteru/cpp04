#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
    AAnimal *rex = new Dog();
    rex->makesound();
    AAnimal *mimi = new Cat();
    mimi->makesound();
    //AAnimal rex : this is not allowed.
    delete rex;
}