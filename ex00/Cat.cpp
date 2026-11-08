#include "Cat.hpp"

Cat::Cat() : Animal()
{
    _type = "Cat";
    std::cout << "[Cat] Default constructor called" << std::endl;
}


Cat::Cat(const Cat& src) : Animal(src)
{
    std::cout << "[Cat] Copy constructor called" << std::endl;
	*this = src;
}

Cat& Cat::operator=(const Cat& src)
{
    std::cout << "[Cat] Copy assignment operator called" << std::endl;

    if (this != &src)
        _type = src._type;

    return *this;
}

Cat::~Cat()
{
    std::cout << "[Cat] Destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "[Cat] Mewo Mewoooo Mewoooooooo ^-^" << std::endl;
}