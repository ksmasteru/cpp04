#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
     this->_type = "Cat";
     std::cout << "Cat constructor has been called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat decosntructor has been called" << std::endl;
}

Cat::Cat(const Cat& rhs) : Animal(rhs)
{
    std::cout << "Cat copy constructor has been called" << std::endl;
}

Cat& Cat::operator= (const Cat& rhs)
{
    if (this == &rhs)
        return (*this);
    Animal::operator=(rhs);
    return (*this);
}

void Cat::makeSound()
{
    std::cout << "Meow" << std::endl;
}
