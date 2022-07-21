#include "../headers/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target)
:Form("RobotomyRequestForm", target, 145, 137)
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & obj)
:Form(obj)
{
}
RobotomyRequestForm & RobotomyRequestForm::operator = ( const RobotomyRequestForm & obj)
{
	Form::operator=(obj);
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}


void RobotomyRequestForm::action(const Bureaucrat& executor) {
    static int _state;
    this->execute(executor);
    if (_state % 2)
        std::cout << this->getTarget() << " has been robotomized successfull" << std::endl;
    else
        std::cout << this->getTarget() << " robotomy failed" << std::endl;
}