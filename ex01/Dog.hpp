#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* _brain;
    public:
        Dog();
        ~Dog();
        Dog(const Dog& rhs);
        Dog& operator= (const Dog& rhs);
        void makesound();
};