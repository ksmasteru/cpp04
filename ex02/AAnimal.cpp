#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal()
{
    std::cout << "AAnimal constructor has been called" << std::endl;
    this->_type = "defaultAAnimal";
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal deconstructor has been called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& rhs)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    this->_type = rhs.getType();
}

AAnimal& AAnimal::operator= (const AAnimal& rhs)
{
    if (this == &rhs)
        return (*this);
    this->_type = rhs.getType();
    return (*this);
}

void    AAnimal::setType(const std::string& _type)
{
    this->_type = _type;
}

void    AAnimal::makesound()
{
    std::cout << "animal's basic sound" << std::endl;
}

const   std::string& AAnimal::getType() const
{
    return (this->_type);
}