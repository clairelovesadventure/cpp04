#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const int size = 10;
    Animal* animals[size];

    for (int i = 0; i < size; ++i)
    {
        if (i < size / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < size; ++i)
    {
        animals[i]->makeSound();
    }

    for (int i = 0; i < size; ++i)
    {
        delete animals[i];
    }

    std::cout << "---- Deep copy test ----" << std::endl;

    Dog basic;
    basic.getBrain()->setIdea(0, "Chase the cat");

    Dog copyDog = basic;
    std::cout << "Basic brain idea[0]: " << basic.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy brain idea[0]: " << copyDog.getBrain()->getIdea(0) << std::endl;

    basic.getBrain()->setIdea(0, "Eat food");
    std::cout << "After change basic idea[0]: " << basic.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy still idea[0]: " << copyDog.getBrain()->getIdea(0) << std::endl;

    // Test: Animal cannot be instantiated (abstract class)
    // Animal animal;  // This would cause a compile error - Animal is abstract!

    return 0;
}

