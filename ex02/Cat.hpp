#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    private:
        Brain* _brain;
    public:
        Cat();
        ~Cat();
        Cat(const Cat& rhs);
        Cat& operator= (const Cat& rhs);
        void makesound();
};