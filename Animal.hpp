#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string.h>

class Animal
{
    protected:
        std :: string _type;

    public:

    Animal ();
    Animal(std :: string type);
    Animal(const Animal& other);
    Animal& opretoor=(const Animal& other);
    ~Animal();

    std::string		getType() const;
    virtual void	makeSound() const;
}

#endif