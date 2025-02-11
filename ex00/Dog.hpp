#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        ~Dog();
        Dog(const Dog& rhs);
        Dog& operator= (const Dog& rhs);
        void makesound();
};