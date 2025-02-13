#pragma once
#include "ICharacter.hpp"
#include "AMateria.hpp"
 //Write the concrete class Character which will implement the following interface:

//  _name; materia tha tit should be used. 
/*The Character possesses an inventory of 4 slots, which means 4 Materias at most.
The inventory is empty at construction. They equip the Materias in the first empty slot
they find. This means, in this order: from slot 0 to slot 3. In case they try to add
a Materia to a full inventory, or use/unequip an unexisting Materia, don’t do anything
(but still, bugs are forbidden). The unequip() member function must NOT delete the
Materia!*/
class AMAteria;
class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria** materias;
        int filledSlots;
        int maxSlots;
    public:
    Character(const std::string& name);
    Character(const Character& rhs);
    Character& operator=(const Character& rhs);
    ~Character();
    std::string const& getName() const;
    void     equip(AMAteria* m);
    void     unequip(int idx);
    void     use(int idx, ICharacter& target);
};