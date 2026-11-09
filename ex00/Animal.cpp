#include "Animal.hpp"

Animal::Animal()
{
    _type = "def";
    std::cout << "[Animal] Default constructor called" << std::endl;
}

Animal::Animal(const Animal& src)
{
    std::cout << "[Animal] Copy constructor called" << std::endl;
    *this = src;

}

Animal& Animal::operator=(const Animal& src)
{
    std::cout << "[Animal] Copy assignment operator called" << std::endl;

    if (this != &src)
        _type = src._type;

    return *this;
}

Animal :: ~Animal()
{
    std::cout << "[Animal] Destructor called" << std::endl;
}

void Animal :: makeSound() const
{
    std::cout << "[Animal] All animals can make sounds!" << std::endl;
}

std :: string Animal :: getType() const
{
    return _type;
}