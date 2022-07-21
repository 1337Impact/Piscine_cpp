#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern
{
public:
	Intern();
	Intern( const Intern &obj);
	Intern & operator = ( const Intern &obj);
	~Intern();

	//mumber functions
    Form *makeForm(const std::string name, const std::string target);
};

#endif