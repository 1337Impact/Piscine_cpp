#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    Dog dogy;
    Cat caty;

    i->makeSound();
    j->makeSound();
    dogy.makeSound();
    caty.makeSound();
    delete j;//should not create a leak
    delete i;
    // system("leaks brain");
    return 0;
}