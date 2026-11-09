#include "Dog.hpp"

Dog::Dog() : Animal()
{
    _type = "Dog";
    _brain = new Brain();
    std::cout << "[Dog] Default constructor called" << std::endl;
}


Dog::Dog(const Dog& src) : Animal(src)
{
    std::cout << "[Dog] Copy constructor called" << std::endl;
    _brain = new Brain(*(src._brain));
}

Dog& Dog::operator=(const Dog& src)
{
    std::cout << "[Dog] Copy assignment operator called" << std::endl;

    if (this != &src)
    {
        Animal::operator=(src);
        if (this->_brain != NULL)
			delete (this->_brain);
		this->_brain = new Brain(*src._brain);
    }

    return *this;
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "[Dog] Destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "[Dog] wof wooof woooffffff ^-^" << std::endl;
}

std::string Dog::getIdea(int idea_nr) const
{
	if (idea_nr >= 0 && idea_nr < 100)
		return (_brain->_ideas[idea_nr]);
	else
		return ("Dog brain just have 100 ideas");
}

void Dog::setIdea(int idea_nr, std::string new_idea)
{
	if (idea_nr >= 0 && idea_nr < 100)
		_brain->_ideas[idea_nr] = new_idea;
	else
		std::cout << "Dog brain can just save 100 ideas"<< std::endl;
}