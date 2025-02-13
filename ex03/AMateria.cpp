#include "AMateria.hpp"

AMAteria::AMAteria(std::string const& type)
{
    this->_type = type;
}

AMAteria::AMAteria(const AMAteria& rhs) : _type(rhs.type)
{
}

AMAteria& AMAteria::operator=(const AMAteria& rhs)
{
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
}

AMAteria::~AMAteria()
{
}