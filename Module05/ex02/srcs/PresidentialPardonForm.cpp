#include  "../headers/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
:Form("PresidentialPardonForm", target, 145, 137)
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & obj)
:Form(obj)
{
}
PresidentialPardonForm & PresidentialPardonForm::operator = ( const PresidentialPardonForm & obj)
{
	Form::operator=(obj);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}



void PresidentialPardonForm::action(const Bureaucrat& executor) {
	this->execute(executor);
	std::cout << this->getTarget() << "has been pardoned by Zaphod Beeblebrox" << std::endl;
}