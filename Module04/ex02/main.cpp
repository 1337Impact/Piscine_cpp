#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal* j = new Dog();
    Animal* i = new Cat();

    i->makeSound();
    j->makeSound();
    std::cout << i->getType() << std::endl;
    std::cout << j->getType() << std::endl;
    delete j;//should not create a leak
    delete i;
    // system("leaks brain");
    return 0;
}