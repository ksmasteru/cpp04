#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
    std::cout << "Animal constructor has been called" << std::endl;
    this->_type = "defaultAnimal";
}

Animal::~Animal()
{
    std::cout << "Animal deconstructor has been called" << std::endl;
}

Animal::Animal(const Animal& rhs)
{
    std::cout << "Animal copy constructor called" << std::endl;
    this->_type = rhs.getType();
}

Animal& Animal::operator= (const Animal& rhs)
{
    if (this == &rhs)
        return (*this);
    this->_type = rhs.getType();
    return (*this);
}

void    Animal::setType(const std::string& _type)
{
    this->_type = _type;
}

void    Animal::makesound()
{
    std::cout << "animal's basic sound" << std::endl;
}

const   std::string& Animal::getType() const
{
    return (this->_type);
}