#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
     std::cout << "Cat constructor has been called" << std::endl;
     this->_type = "Cat";
     this->_brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat decosntructor has been called" << std::endl;
}

Cat::Cat(const Cat& rhs) : Animal(rhs)
{
    std::cout << "Cat copy constructor has been called" << std::endl;
    this->_brain = new Brain(*(rhs._brain));// is this a good practice ?
}
Cat& Cat::operator= (const Cat& rhs)
{
    if (this == &rhs)
        return (*this);
    Animal::operator=(rhs);
    // delete current brain;
    delete _brain;
    this->_brain = new Brain(*(rhs._brain));
    return (*this);
}

void Cat::makeSound()
{
    std::cout << "Meow" << std::endl;
}
