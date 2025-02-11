#pragma once
#include <string>

class Brain{
    private:
        std::string* _ideas;
        const static int _maxIdeas;
        int _ideasNumber;
    public:
        Brain();
        ~Brain();
        Brain(const Brain& rhs); //!?
        Brain& operator=(const Brain& rhs);
        // set idea ?
        void    set_idea(const std::string& new_idea);
        // speak idea aloud ?
        void    speak_ideas() const;
};