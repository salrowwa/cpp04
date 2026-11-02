#include "Dog.hpp"

Dog::Dog() : Animal()
{
	_type = "Dog";
	std::cout << "Dog default constructor called\n";
}

Dog::Dog (std::string type) : Animal(type)
{
	_type = type;
	std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog &other) : Animal(other)
{
	*this = other;
	std::cout << "Dog copy constructor called\n";
}

Dog &Dog::operator=(const Dog &other)
{
	_type = other._type;
	std::cout << "Dog copy assignment constructor called\n";
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog deconstructor called\n";
}


void Dog::makeSound() const
{
	std::cout << "Wau Wau Wau\n";
}