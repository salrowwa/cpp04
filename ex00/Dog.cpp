#include "Dog.hpp"

Dog :: Dog() : Animal()
{
    _type = "Dog";
    std::cout << "[Dog] Default constructor called" << std::endl;
}


Dog :: Dog(const Dog& src) : Animal(src)
{
    std::cout << "[Dog] Copy constructor called" << std::endl;
	*this = src;
}

Dog& Dog :: operator=(const Dog& src)
{
    std::cout << "[Dog] Copy assignment operator called" << std::endl;

    if (this != &src)
        _type = src._type;

    return *this;
}

Dog :: ~Dog()
{
    std::cout << "[Dog] Destructor called" << std::endl;
}

void Dog :: makeSound() const
{
    std::cout << "[Dog] wof wooof woooffffff ^-^" << std::endl;
}