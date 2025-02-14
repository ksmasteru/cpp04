#pragma once
#include <string>
#include "Brain.hpp"

class AAnimal{
    protected: 
        std::string _type;
    public:
        AAnimal();
        AAnimal(const AAnimal& rhs);
        AAnimal& operator= (const AAnimal& rhs);
        virtual ~AAnimal();
        virtual void    makesound() = 0;
        // getters
        const std::string& getType() const;
        // setters
        void    setType(const std::string& type);
};