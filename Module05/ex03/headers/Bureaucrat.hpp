#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Form;

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;
public:
    // constractor/destractor
    Bureaucrat();
    Bureaucrat( std::string name, int grade);
    Bureaucrat( const Bureaucrat & obj);

    ~Bureaucrat();

    // overload operator
    Bureaucrat & operator = ( const Bureaucrat & obj);

    // methods
    std::string getName( void ) const;
    int getGrade( void ) const;

    void incrementGrade( void );
    void decrementGrade( void );

    void signForm( Form & form);
    void executeForm(Form & form);

    // exception classes emplimentation
    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
};

//overload of the insertion («) operator
std::ostream& operator << (std::ostream& oso, const Bureaucrat& obj);



#endif