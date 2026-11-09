#include <iostream>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

static void title(const std::string& s)
{
    std::cout << std::endl << "===== " << s << " =====" << std::endl;
}

int main()
{
    title("Subject test");
    {
        const AAnimal* j = new Dog();
        const AAnimal* i = new Cat();

        delete j; // should not create a leak
        delete i;
    }

    title("Array of Animals (half Dog, half Cat)");
    {
        const int size = 6;
        AAnimal* zoo[size];

        for (int k = 0; k < size / 2; k++)
            zoo[k] = new Dog();
        for (int k = size / 2; k < size; k++)
            zoo[k] = new Cat();

        for (int k = 0; k < size; k++)
            zoo[k]->makeSound();

        for (int k = 0; k < size; k++)
            delete zoo[k]; // deleted as Animal*
    }

    title("Deep copy: Cat copy constructor");
    {
        Cat original;
        original.setIdea(0, "eat fish");

        Cat copy(original);
        original.setIdea(0, "sleep");

        std::cout << "original idea 0: " << original.getIdea(0) << std::endl;
        std::cout << "copy idea 0:     " << copy.getIdea(0) << std::endl;
    }

    title("Deep copy: Cat assignment operator");
    {
        Cat original;
        original.setIdea(0, "eat fish");

        Cat copy;
        copy = original;
        original.setIdea(0, "sleep");

        std::cout << "original idea 0: " << original.getIdea(0) << std::endl;
        std::cout << "copy idea 0:     " << copy.getIdea(0) << std::endl;
    }

    title("Deep copy: Dog copy constructor");
    {
        Dog original;
        original.setIdea(0, "chase ball");

        Dog copy(original);
        original.setIdea(0, "bark");

        std::cout << "original idea 0: " << original.getIdea(0) << std::endl;
        std::cout << "copy idea 0:     " << copy.getIdea(0) << std::endl;
    }

    title("Deep copy: Dog assignment operator");
    {
        Dog original;
        original.setIdea(0, "chase ball");

        Dog copy;
        copy = original;
        original.setIdea(0, "bark");

        std::cout << "original idea 0: " << original.getIdea(0) << std::endl;
        std::cout << "copy idea 0:     " << copy.getIdea(0) << std::endl;
    }

    title("Deleting the original must not affect the copy");
    {
        Cat* a = new Cat();
        a->setIdea(5, "nap");
        Cat* b = new Cat(*a);
        delete a;
        std::cout << "copy idea 5 after deleting original: " << b->getIdea(5) << std::endl;
        delete b;
    }

    title("Self assignment and out of range");
    {
        Dog d;
        d.setIdea(1, "still here");
        Dog& ref = d;
        d = ref;
        std::cout << "idea 1 after self assignment: " << d.getIdea(1) << std::endl;
        d.setIdea(100, "out of range");
        std::cout << d.getIdea(-1) << std::endl;
    }

    return 0;
}