#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include <iostream>
# include "Brain.hpp"
# include "AAnimal.hpp"

class Dog : public AAnimal
{
    private:
        Brain* _brain;
    
    public:
        Dog();
       Dog(const Dog& src);
       Dog& operator=(const Dog& src);
       virtual ~Dog();

        virtual void makeSound() const;
        std::string 	getIdea(int idea_nr) const;
		void 			setIdea(int idea_nr, std::string idea);

};

#endif 



