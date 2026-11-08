#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal
{
    private:
    
    public:
        WrongCat();
        WrongCat(const WrongCat& src);
        WrongCat& operator=(const WrongCat& src);
        ~WrongCat();

        void makeSound() const;
};

#endif 