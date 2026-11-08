#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

static void title(const std::string& s)
{
    std::cout << std::endl << "===== " << s << " =====" << std::endl;
}

int main()
{
    title("Subject test (Animal)");
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); // cat sound
        j->makeSound(); // dog sound
        meta->makeSound();

        delete meta;
        delete j;
        delete i;
    }

    title("Subject test (WrongAnimal) - should print the WrongAnimal sound");
    {
        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* i = new WrongCat();

        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); // WrongAnimal sound (not virtual)
        meta->makeSound();

        delete meta;
        delete i;
    }

    title("WrongCat used as WrongCat (own sound)");
    {
        WrongCat wc;
        wc.makeSound();
    }

    title("Stack objects");
    {
        Dog d;
        Cat c;
        d.makeSound();
        c.makeSound();
        std::cout << d.getType() << " / " << c.getType() << std::endl;
    }

    title("Copy constructor and assignment");
    {
        Dog a;
        Dog b(a);
        Dog c;
        c = a;
        std::cout << a.getType() << " " << b.getType() << " " << c.getType() << std::endl;
        b.makeSound();

        Cat x;
        Cat y(x);
        Cat z;
        z = x;
        std::cout << x.getType() << " " << y.getType() << " " << z.getType() << std::endl;
    }

    title("Polymorphic array");
    {
        Animal* zoo[4];
        zoo[0] = new Dog();
        zoo[1] = new Cat();
        zoo[2] = new Dog();
        zoo[3] = new Cat();
        for (int k = 0; k < 4; k++)
            zoo[k]->makeSound();
        for (int k = 0; k < 4; k++)
            delete zoo[k];
    }

    return 0;
}