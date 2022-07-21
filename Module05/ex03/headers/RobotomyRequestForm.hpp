#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
    public:
        RobotomyRequestForm( std::string target );
        RobotomyRequestForm( const RobotomyRequestForm & obj);
        ~RobotomyRequestForm();

        RobotomyRequestForm & operator = ( const RobotomyRequestForm & obj);


        virtual void action(const Bureaucrat& executor) ;
};


#endif