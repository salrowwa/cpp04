#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    _type = "def";
    std::cout << "[WrongAnimal] Default constructor called" << std::endl;
}


WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
    std::cout << "[WrongAnimal] Copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
    std::cout << "[WrongAnimal] Copy assignment operator called" << std::endl;

    if (this != &src)
        _type = src._type;

    return *this;
}

WrongAnimal :: ~WrongAnimal()
{
    std::cout << "[WrongAnimal] Destructor called" << std::endl;
}

void WrongAnimal :: makeSound() const
{
    std::cout << "[WrongAnimal] All WrongAnimals can make sounds!" << std::endl;
}

std :: string WrongAnimal :: getType() const
{
    return _type;
}