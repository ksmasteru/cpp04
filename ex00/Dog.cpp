#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
     std::cout << "Dog constructor has been called" << std::endl;
     this->_type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog decosntructor has been called" << std::endl;
}

Dog::Dog(const Dog& rhs) : Animal(rhs)
{
    std::cout << "Dog copy constructor has been called" << std::endl;
}

Dog& Dog::operator= (const Dog& rhs)
{
    if (this == &rhs)
        return (*this);
    std::cout << "Dog copy assignement called" << std::endl;
    Animal::operator=(rhs);
    return (*this);
}

void makeSound()
{
    std::cout << "Wouf Wouf" << std::endl;
}
