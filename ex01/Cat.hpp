#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include <iostream>
# include "Brain.hpp"
# include "Animal.hpp"

class Cat : public Animal
{
    private:
        Brain* _brain;
    
    public:
        Cat();
       Cat(const Cat& src);
       Cat& operator=(const Cat& src);
       virtual ~Cat();

        virtual void makeSound() const;
        std::string 	getIdea(int idea_nr) const;
		void 			setIdea(int idea_nr, std::string idea);

};

#endif 