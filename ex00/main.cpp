#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
    Cat mimi;
    Dog rex;
    mimi.makeSound();
    rex.makeSound();
    Animal *animal = new Cat();
    Animal *dog = new Dog();
    animal->makeSound();
    dog->makeSound();
    delete animal;
    delete dog;

}