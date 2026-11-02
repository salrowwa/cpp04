#include "Cat.hpp"

Cat::Cat() : Animal()
{
	_type = "Cat";
	std::cout << "Cat default constructor called\n";
}

Cat::Cat (std::string type) : Animal(type)
{
	_type = type;
	std::cout << "Cat constructor called\n";
}

Cat::Cat(const Cat &other) : Animal(other)
{
	*this = other;
	std::cout << "Cat copy constructor called\n";
}

Cat &Cat::operator=(const Cat &other)
{
	_type = other._type;
	std::cout << "Cat copy assignment constructor called\n";
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat deconstructor called\n";
}


void Cat::makeSound() const
{
	std::cout << "Miau Miau Miau\n";
}