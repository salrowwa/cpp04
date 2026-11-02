#include "Animal.hpp"

Animal :: Animal () 
{
    std :: cout <<"";
}

Animal :: Animal (std :: string type) : _type(type) 
{
    std :: cout <<"";
}

Animal :: Animal (const Animal& other) : _type(other._type)
{
    std :: cout <<"";
}

Animal& Animal :: Animal (const Animal& other)
{
    if (this != other)
        _type = other._type;
    std :: cout << "";

    return *this;
}

Animal :: ~Animal ()
{
 std :: cout <<"";
}

void Animal::makeSound()
{
    std :: cout <<"";
}

std::string Animal::getType () const
{
    return _type;
}