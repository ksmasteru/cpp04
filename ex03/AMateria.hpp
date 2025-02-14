#pragma once

#include <string>
#include "ICharacter.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
class ICharacter;
class AMateria
{
    protected:
        std::string _type;
    public:
    AMateria(std::string const & type);
    AMateria(const AMateria& rhs);
    virtual ~AMateria();
    AMateria& operator= (const AMateria& rhs);
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};