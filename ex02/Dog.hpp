#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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