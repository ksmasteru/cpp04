#pragma once
#include "AMataria.hpp"

class Ice : public AMAteria
{
    public:
        Ice();
        Ice(const Ice& rhs);
        Ice& operator=(const Ice& rhs);
        ~Ice();
        void    use(ICharacter& target);
};