#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    _type = "WrongCat";
    std::cout << "[WrongCat] Default constructor called" << std::endl;
}


WrongCat::WrongCat(const WrongCat& src) : WrongAnimal(src)
{
    std::cout << "[WrongCat] Copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& src)
{
    std::cout << "[WrongCat] Copy assignment operator called" << std::endl;

    if (this != &src)
        WrongAnimal::operator=(src);

    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "[WrongCat] Destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "[WrongCat] Mewo Mewoooo Mewoooooooo ^-^" << std::endl;
}