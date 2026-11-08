#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
    protected:
    
    public:
        std :: string _ideas[100];

        Brain();
        Brain(const Brain& src);
        Brain& operator=(const Brain& src);
        virtual ~Brain();
};

#endif