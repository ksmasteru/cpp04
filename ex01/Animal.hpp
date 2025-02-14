#pragma once
#include <string>
#include "Brain.hpp"

class Animal{
    protected: 
        std::string _type;
    public:
        Animal();
        Animal(const Animal& rhs);
        Animal& operator= (const Animal& rhs);
        virtual ~Animal() = 0;
        virtual void    makesound();
        // getters
        const std::string& getType() const;
        // setters
        void    setType(const std::string& type);
};