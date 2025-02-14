#include "Character.hpp"
#include <iostream>

// left overs are uniaue to each class they dont get copied ? makes no sense.
// copying a linked list is tiresome. not worth the hussle 
Character::Character(const std::string& name) : _name(name), _emptySlot(0), _maxSlots(4), leftOverMaterias(nullptr)
{
    this->_materias = new AMateria*[this->_maxSlots];
    for (int i = 0 ; i < this->_maxSlots; i++)
        this->_materias[i] = nullptr;
}

Character::~Character()
{
    delete[] _materias;
    free_ls(this->leftOverMaterias);
}

Character::Character(const Character& rhs) :_name(rhs.getName()), _emptySlot(rhs._emptySlot), _maxSlots(rhs._maxSlots), leftOverMaterias(nullptr)
{
    this->_materias = new AMateria*[_maxSlots];
    for (int i = 0 ; i < _maxSlots; i++)
    {
        if (rhs._materias[i] == nullptr)
        {
            this->_materias[i] = nullptr;
            continue;
        }
        this->_materias[i] = rhs._materias[i]->clone();
    }
}

Character& Character::operator= (const Character& rhs)
{
    if (this == &rhs)
        return (*this);
    this->_name = rhs.getName();
    this->_emptySlot = rhs.getemptySlot();
    this->_maxSlots = rhs._maxSlots;
    this->leftOverMaterias = nullptr;
    // deep copy of the inventory;

    //delete the current inventory
    delete [] this->_materias;
    this->_materias = new AMateria*[_maxSlots]; // ? new was
    for (int i = 0 ; i < _maxSlots; i++)
    {
        if (rhs._materias[i] == nullptr)
        {
            this->_materias[i] = nullptr;
            continue;
        }
        this->_materias[i] = rhs._materias[i]->clone();
    }
    return (*this);
}

std::string const& Character::getName() const
{
    return (this->_name);
}


/* returns the idx of the first empty materia at inventory
returns -1 on failure*/
int  Character::findEmptyslot() const
{
    // you could at first assign all mATERIA TO NULL;
    for (int i = 0 ; i < this->_maxSlots - 1; i++)
    {
        if  (this->_materias[i])
            return (i);
    }
    return (-1);
}

void    Character::equip(AMateria* m)
{
    // equip the AMateria m at the empty slot
    // empty slot if first initialized to 0;
    if (m == nullptr)
         return ;
    this->_emptySlot = findEmptyslot();
    if (this->_emptySlot != -1)
    {
        this->_materias[this->_emptySlot] = m->clone();
        this->_emptySlot = this->findEmptyslot();
    }
    else
        std::cout << "equip operation failed! : try proceed unequip some materias and repeat this action" << std::endl;
}

void    Character::unequip(int idx)
{
    if (idx > _maxSlots - 1 || idx == this->findEmptyslot())
        std::cout << "no  Materia at slot " << idx << std::endl;
    else
    {
        // free the materia at idx slot and set empty slot to idx
        // linked list to store unequiped materia  TODO A CLONE OF OBJECT
        list_addBack(&(this->leftOverMaterias), this->_materias[idx]); //address stored
        this->_materias[idx] = nullptr; // address overriden but still allocated
    }
}

void    Character::use(int idx, ICharacter& target)
{
    if (idx == this->findEmptyslot() || idx > _maxSlots - 1)
        std::cout << "no Materia at slot " << idx << std::endl;
    this->_materias[idx]->use(target);
    // The use(int, ICharacter&) member function will have to use the Materia at the
    //slot[idx], and pass the target parameter to the AMateria::use function.
}

int    Character::getemptySlot() const
{
    return (this->findEmptyslot());
}