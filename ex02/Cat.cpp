#include "Cat.hpp"

Cat::Cat() : Animal()
{
    _type = "Cat";
    _brain = new Brain();
    std::cout << "[Cat] Default constructor called" << std::endl;
}


Cat::Cat(const Cat& src) : Animal(src)
{
    std::cout << "[Cat] Copy constructor called" << std::endl;
    _brain = new Brain(*(src._brain));
}

Cat& Cat::operator=(const Cat& src)
{
    std::cout << "[Cat] Copy assignment operator called" << std::endl;

    if (this != &src)
    {
        _type = src._type;
        if (this->_brain != NULL)
			delete (this->_brain);
		this->_brain = new Brain(*src._brain);
    }

    return *this;
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "[Cat] Destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "[Cat] Mewo Mewoooo Mewoooooooo ^-^" << std::endl;
}

std::string Cat::getIdea(int idea_nr) const
{
	if (idea_nr >= 0 && idea_nr < 100)
		return (_brain->_ideas[idea_nr]);
	else
		return ("Cat brain just have 100 ideas");
}

void Cat::setIdea(int idea_nr, std::string new_idea)
{
	if (idea_nr >= 0 && idea_nr < 100)
		_brain->_ideas[idea_nr] = new_idea;
	else
		std::cout << "Cat brain can just save 100 ideas";
}