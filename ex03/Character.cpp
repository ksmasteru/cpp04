#include "Character.hpp"

Character::Character(const std::string& name) : _name(name), Materias(nullptr), _filledSlots(0), _maxSlots(4)
{
    // should alloacte at first ?    
}

Character::~Character()
{
    // should delete the inventory ?
}

Character::Character(const Character& rhs) :_name(rhs.getName()), _filledSlots(rhs._filledSlots), _maxSlots(rhs._maxSlots)
{
    // deep copy of the materias;
}

Character& Character::operator= (const Character& rhs)
{
    if (this == &rhs)
        return (*this);
    this->_name = rhs.getName();
    this->_filledSlots = rhs._filledSlots;
    this->_maxSlots = rhs._maxSlots;
}

void    Character::equip(AMAteria* m)
{
    
}

void    Character::unequip(int idx)
{
     
}

void    Character::use(int idx, ICharacter& target)
{
    
}