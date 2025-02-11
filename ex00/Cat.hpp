#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        ~Cat();
        Cat(const Cat& rhs);
        Cat& operator= (const Cat& rhs);
        void makeSound();
};
