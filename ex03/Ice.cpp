#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMAteria("ice")
{
}

Ice::Ice(const Ice& rhs)
{
    // copying the type makes no sense. 
    this->_type = "Ice";    
}

Ice& operator= (const Ice& rhs)
{
    return (*this);
}


void Ice::use(ICharacter& target)
{
    std::cout << "* Shoots an ice bolt at " << target._name << " *" << std::endl;
}

Ice::~Ice(){}