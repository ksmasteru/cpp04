#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria **materiaInventory;
        int _maxSlots; 
        int _filledMaterias; 
    public :
        MateriaSource();
        MateriaSource(const MateriaSource& rhs);
        MateriaSource& operator= (const MateriaSource& rhs);
        ~MateriaSource();
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
};