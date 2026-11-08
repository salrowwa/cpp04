#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
    private:
    
    public:
        Cat();
       Cat(const Cat& src);
       Cat& operator=(const Cat& src);
       virtual ~Cat();

        virtual void makeSound() const;
};

#endif 