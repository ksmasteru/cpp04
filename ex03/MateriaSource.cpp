#include "MateriaSource.hpp"
#include <iostream>
/*earnMateria(AMateria*)
Copies the Materia passed as a parameter and store it in memory so it can be cloned
later. Like the Character, the MateriaSource can know at most 4 Materias. They
are not necessarily unique.
• createMateria(std::string const &)
Returns a new Materia. The latter is a copy of the Materia previously learned by
the MateriaSource whose type equals the one passed as parameter. Returns 0 if
the type is unknown.
In a nutshell, your MateriaSource must be able to learn "templates" of Materias to
create them when needed. Then, you will be able to generate a new Materia using just
a string that identifies its type.
*/

MateriaSource::MateriaSource() : _filledMaterias(0), _maxSlots(4)
{
    this->materiaInventory = new  AMateria*[_maxSlots];
    for (int i = 0 ; i < _maxSlots ; i++)
        this->materiaInventory[i] = nullptr;
}
MateriaSource::MateriaSource(const MateriaSource& rhs) : _filledMaterias(rhs._filledMaterias), _maxSlots(4)
{
    this->materiaInventory = new  AMateria*[_maxSlots];
    // deep copy of inventoty;
    for (int i = 0 ; i < _maxSlots; i++)
    {
        if (rhs.materiaInventory[i] == nullptr)
        {
            this->materiaInventory[i] = nullptr;
            continue;
        }
        this->materiaInventory[i] = rhs.materiaInventory[i]->clone();
    }
}
MateriaSource& MateriaSource::operator= (const MateriaSource& rhs)
{
    if (this == &rhs)
        return (*this);
    this->_filledMaterias = rhs._filledMaterias;
    this->_maxSlots = rhs._maxSlots;
    delete [] this->materiaInventory;
    this->materiaInventory = new AMateria*[_maxSlots];
    for (int i = 0 ; i < _maxSlots; i++)
    {
        if (rhs.materiaInventory[i] == nullptr)
        {
            this->materiaInventory[i] = nullptr;
            continue;
        }
        this->materiaInventory[i] = rhs.materiaInventory[i]->clone();
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    delete [] materiaInventory;
}

/*Copies the Materia passed as a parameter and store it in memory so it can be cloned
later. Like the Character, the MateriaSource can know at most 4 Materias. They
are not necessarily unique.*/

void MateriaSource::learnMateria(AMateria* m)
{
    if (m == nullptr)
        return ;
    if  (this->_filledMaterias < this->_maxSlots - 1)
         this->materiaInventory[this->_filledMaterias++] = m;
    else
        std::cout << "not enough space in inventory for new materia" << std::endl;
}
/*Returns a new Materia. The latter is a copy of the Materia previously learned by
the MateriaSource whose type equals the one passed as parameter. Returns 0 if
the type is unknown.*/
AMateria* MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0 ; i < this->_filledMaterias ; i++)
    {
         if (this->materiaInventory[i]->getType() == type)
            return (this->materiaInventory[i]->clone());
    }
    return (0);
}