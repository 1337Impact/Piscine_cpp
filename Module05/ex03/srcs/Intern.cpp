#include "../headers/Intern.hpp"


Intern::Intern()
{
}

Intern::Intern(const Intern & obj)
{
    (void)obj;
}

Intern & Intern::operator=(const Intern & obj)
{
    (void)obj;
    return *this;
}

Intern::~Intern()
{
}

Form *Intern::makeForm(const std::string name, const std::string target)
{
    std::string names[] = {"shrubbery creation", "robotomy request", "presidential pardon", "default"};
    int index = 0;
    Form *obj;
    while (index < 4)
        if (names[index++] == name)
            break;
    switch (index)
    {
    case 1:
        obj = new ShrubberyCreationForm(target);
        break;
    case 2:
        obj = new RobotomyRequestForm(target);
        break;
    case 3:
        obj = new PresidentialPardonForm(target);
        break;
    default:
        std::cout << "Form: " << name << " dosn't exist" << std::endl;
        return nullptr;
        break;
    }
    std::cout << "Intern creates " << *obj << std::endl;
    return obj;
}