#include "Brain.hpp"
#include <iostream>

const   int Brain::_maxIdeas = 99;
//        std::string* _ideas;
Brain::Brain() : _ideasNumber(0)
{
    this->_ideas = new std::string[_maxIdeas + 1]; //how;
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
    // delete the shalow copy.
    delete [] _ideas;
    std::cout << "Brain deconstructor called" << std::endl;
}

Brain::Brain(const Brain& rhs)
{
    std::cout << "Brain copy constructor" << std::endl;
    this->_ideas = new std::string[_maxIdeas + 1];
    this->_ideasNumber = rhs._ideasNumber;
    for (int i = 0 ; i < _ideasNumber; i++)
        this->_ideas[i] = rhs._ideas[i];
}

Brain& Brain::operator= (const Brain& rhs)
{
    if (this == &rhs)
        return (*this);
    std::cout << "Brain copy assigment opeartor called" << std::endl;
    this->_ideas = new std::string[_maxIdeas + 1];
    // can use memcopy.?
    this->_ideasNumber = rhs._ideasNumber;
    for (int i = 0; i < _ideasNumber; i++)
        this->_ideas[i] = rhs._ideas[i];
    return (*this);
}

void     Brain::set_idea(const std::string& new_idea)
{
    if (this->_ideasNumber > _maxIdeas)
    {
        std::cout << "Max number of ideas reached" << std::endl;
        return ;
    }
    this->_ideas[_ideasNumber] = new_idea;
}

void    Brain::speak_ideas() const
{
    for (int i = 0 ; i < this->_ideasNumber ; i++)
        std::cout <<  this->_ideas[i] << std::endl;
}