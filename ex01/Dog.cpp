#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
    std::cout << "Dog constructor has been called" << std::endl;
    this->_brain = new Brain();
    this->_type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog decosntructor has been called" << std::endl;
    delete _brain;
}

Dog::Dog(const Dog& rhs) : Animal(rhs)
{
    std::cout << "Dog copy constructor has been called" << std::endl;
    this->_brain = new Brain(*(rhs._brain));
}

Dog& Dog::operator= (const Dog& rhs)
{
    if (this == &rhs)
        return (*this);
    std::cout << "Dog copy assignement called" << std::endl;
    Animal::operator=(rhs);
    delete _brain;
    this->_brain = new Brain(*(rhs._brain));
    return (*this);
}

void Dog::makesound()
{
    std::cout << "Wouf Wouf" << std::endl;
}
