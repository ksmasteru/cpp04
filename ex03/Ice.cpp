#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice")
{

}

Ice::Ice(const Ice& rhs) : AMateria(rhs) 
{
    this->_type = "ice";
}

Ice& Ice::operator= (const Ice& rhs)
{
    return (*this);
}


void Ice::use(ICharacter& target)
{
    std::cout << "* Shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const
{
    Ice *ret = new Ice();
    return (ret);
}

Ice::~Ice(){}