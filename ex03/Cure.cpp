#include "Cure.hpp"
#include "ICharacter.hpp"
#include <string>
#include <iostream>

Cure::Cure() : AMateria("cure")
{
    
}

Cure::Cure(const Cure& rhs) : AMateria(rhs)
{
    this->_type = "ice";
}

Cure& Cure::operator= (const Cure& rhs)
{
    return (*this);
}

Cure::~Cure()
{
    
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds" << std::endl;
}

AMateria* Cure::clone() const
{
    // how do i ensure it is an exact copy of this instance
    // nothing chages in Cure object no need for further code
    AMateria* clone = new Cure();
    return (clone);
}