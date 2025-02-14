#include "AMateria.hpp"

AMateria::AMateria(std::string const& type)
{
    this->_type = type;
}

AMateria::AMateria(const AMateria& rhs)
{
    // cpying the type makes no sense;
}

AMateria& AMateria::operator=(const AMateria& rhs)
{
    return (*this);
}

AMateria::~AMateria()
{
    
}

void AMateria::use(ICharacter& target)
{

}

 std::string const & AMateria::getType() const
 {
    return (this->_type);
 }

