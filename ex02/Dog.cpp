#include "Dog.hpp"

Dog::Dog() : brain(new Brain())
{
    this->type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other), brain(0)
{
    //编译器将 other（Dog&）转换为 Animal&，然后调用 Animal 的拷贝构造函数
    std::cout << "Dog copy constructor called" << std::endl;
    if (other.brain)
        this->brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
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

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

void Dog::makeSound() const
{
    std::cout << "Woof! Woof!" << std::endl;
}

Brain* Dog::getBrain() const
{
    return this->brain;
}

