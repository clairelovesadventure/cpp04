#include "Cat.hpp"

Cat::Cat() : brain(new Brain())
{
    this->type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other), brain(0)
{
    std::cout << "Cat copy constructor called" << std::endl;
    if (other.brain)
        this->brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        if (this->brain)
            delete this->brain;
        if (other.brain)
            this->brain = new Brain(*other.brain);
        else
            this->brain = 0;
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}

void Cat::makeSound() const
{
    std::cout << "Meow! Meow!" << std::endl;
}

Brain* Cat::getBrain() const
{
    return this->brain;
}


