#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
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