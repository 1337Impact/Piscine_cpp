#include "../headers/Bureaucrat.hpp"
#include "../headers/Form.hpp"


Bureaucrat::Bureaucrat()
: _name("default"), _grade(1)
{
}

Bureaucrat::Bureaucrat( std::string name, int grade)
:_name(name), _grade(grade)
{
    if (_grade < 1){
        throw GradeTooHighException();
    }
    else if (_grade > 150){
        throw GradeTooLowException();
    }
    else{
        _grade = grade;
    }
}

Bureaucrat::Bureaucrat( const Bureaucrat & obj)
:_name(obj.getName()), _grade(obj.getGrade())
{
}

Bureaucrat::~Bureaucrat()
{
}

// overload aignement operator
 Bureaucrat & Bureaucrat::operator = ( const Bureaucrat & obj){
    _grade = obj.getGrade();
    return *this;
 }

std::string Bureaucrat::getName( void ) const{
    return this->_name;
}

int Bureaucrat::getGrade( void ) const{
    return _grade;
}

void    Bureaucrat::incrementGrade( void ){
    if (_grade > 1){
        _grade--;
    }else{
        throw GradeTooHighException();
    }
}

void    Bureaucrat::decrementGrade( void ){
    if (_grade < 150){
        _grade++;
    }else{
        throw GradeTooLowException();
    }
}

void    Bureaucrat::signForm(Form & form){
    try
    {
        form.beSigned(*this);
        std::cout << *this << " signed " << form << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << *this << " couldn't sign " << form
                << " because " << e.what() << std::endl;
    }
}
void Bureaucrat::executeForm(Form & form){
    try
    {
        form.action(*this);
        std::cout << *this << " executed " << form << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << *this << " can't be excute " << form << " because " << e.what() << std::endl;
    }
}



// exception classes emplimentation

const char * Bureaucrat::GradeTooHighException::what() const throw(){
    return "Exception: Grade too High!";
}
const char * Bureaucrat::GradeTooLowException::what() const throw(){
    return "Exception: Grade too Low!";
}

// overload of the insertion («) operator

std::ostream& operator << (std::ostream& oso, const Bureaucrat& obj){
    oso << obj.getName() << ", bureaucrat grade " << obj.getGrade() << '.';
    return oso;
}