#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMAteria("cure")
{
    
}

Cure::Cure(const AMateria& rhs)
{
    //this->_type = rhs.type; makes no sence;
    this->_type = "Cure";
}

Cure& operator= (const Cure& rhs)
{
    return (*this);
}

Cure::~Cure()
{
    
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target._name << "'s wounds" << std::endl;
}