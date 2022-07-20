#include "Form.hpp"


Form::Form()
: _name("default"), _signed(false), _sGrade(1), _eGrade(1)
{
}

Form::Form( std::string & name, int sGrade, int eGrade)
:_name(name), _sGrade(sGrade), _eGrade(eGrade)
{
    if (_sGrade < 1){
        throw GradeTooHighException();
    }
    else if (_sGrade > 150){
        throw GradeTooLowException();
    }
    if (_eGrade < 1){
        throw GradeTooHighException();
    }
    else if (_eGrade > 150){
        throw GradeTooLowException();
    }
}

Form::Form( const Form & obj)
:_name(obj._name), _signed(_signed), _sGrade(obj._sGrade), _eGrade(obj._eGrade)
{
}

Form::~Form()
{
}

// overload aignement operator
 Form & Form::operator = ( const Form & obj){
    (void)obj;
    return *this;
}


// getters
std::string Form::getName( void ) const{
    return this->_name;
}

bool    Form::isSigned( void ) const{
    return _signed;
}

int Form::getSignGrade( void ) const{
    return _sGrade;
}

int Form::getExecuteGrade( void ) const{
    return _sGrade;
}

//mumber functions
void    Form::beSigned( const Bureaucrat & obj){
    if (obj.getGrade() <= this->_sGrade){
        _signed = true;
    }
    else{
        throw GradeTooLowException();
    }
}



// exception classes emplimentation
const char * Form::GradeTooHighException::what() const throw(){
    return "Exception: Grade too High!";
}
const char * Form::GradeTooLowException::what() const throw(){
    return "Exception: Grade too Low!";
}

// overload of the insertion («) operator
std::ostream& operator << (std::ostream& oso, const Form& obj){
    oso << "Name: " << obj.getName()
        << ", signed: " << obj.isSigned()
        << ", grade required to sign form: " << obj.isSigned()
        << ", grade required to execute form: " << obj.getExecuteGrade();
    return oso;
}