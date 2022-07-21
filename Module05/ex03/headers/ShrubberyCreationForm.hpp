#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
    private:
    public:
        ShrubberyCreationForm( std::string target );
        ShrubberyCreationForm( const ShrubberyCreationForm & obj);
        ~ShrubberyCreationForm();

        ShrubberyCreationForm & operator = ( const ShrubberyCreationForm & obj);

        virtual void action(const Bureaucrat& executor) ;
};


#endif