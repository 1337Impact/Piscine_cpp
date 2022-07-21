#include "../headers/Form.hpp"


Form::Form()
: _name("default"), _signed(false), _sGrade(1), _eGrade(1)
{
}

Form::Form( std::string name, int sGrade, int eGrade)
:_name(name), _signed(false), _sGrade(sGrade), _eGrade(eGrade)
{
    if (_sGrade < 1 || _eGrade < 1){
        throw GradeTooHighException();
    }
    else if (_sGrade > 150 || _eGrade > 150){
        throw GradeTooLowException();
    }
}
Form::Form( std::string name, std::string target, int sGrade, int eGrade)
:_name(name), _target(target), _signed(false), _sGrade(sGrade), _eGrade(eGrade)
{
    if (_sGrade < 1 || _eGrade < 1){
        throw GradeTooHighException();
    }
    else if (_sGrade > 150 || _eGrade > 150){
        throw GradeTooLowException();
    }
}

Form::Form( const Form & obj)
:_name(obj._name), _target(obj._target), _signed(obj._signed), _sGrade(obj._sGrade), _eGrade(obj._eGrade)
{
}

Form::~Form()
{
}

// overload aignement operator
 Form & Form::operator = ( const Form & obj){
    this->_signed = obj.isSigned();
    return *this;
}


// getters
std::string Form::getName( void ) const{
    return this->_name;
}

std::string Form::getTarget( void ) const{
    return this->_target;
}

bool    Form::isSigned( void ) const{
    return this->_signed;
}

int Form::getSignGrade( void ) const{
    return this->_sGrade;
}

int Form::getExecuteGrade( void ) const{
    return this->_sGrade;
}

//mumber functions
void    Form::beSigned( const Bureaucrat & obj){
    if (!this->isSigned()){
        if (obj.getGrade() <= this->_sGrade){
            this->_signed = true;
        }
        else{
            throw GradeTooLowException();
        }
    }
    else{
        throw FormAlreadySignedException();
    }
}

void Form::execute(Bureaucrat const & executor) const
{
    if (!this->isSigned())
        throw Form::FormNotSignedException();
    if (executor.getGrade() > this->_eGrade)
        throw Form::GradeTooLowException();
}


// exception classes emplimentation
const char * Form::GradeTooHighException::what() const throw(){
    return "Exception: Grade too High!";
}
const char * Form::GradeTooLowException::what() const throw(){
    return "Exception: Grade too Low!";
}
const char * Form::FormAlreadySignedException::what() const throw(){
    return "Exception: Form already Signed!";
}
const char * Form::FormNotSignedException::what() const throw(){
    return "Exception: Form Not Signed!";
}

// overload of the insertion («) operator
std::ostream& operator << (std::ostream& oso, const Form& obj){
    oso << "Name: " << obj.getName()
        << ", signed: " << obj.isSigned()
        << ", grade required to sign form: " << obj.isSigned()
        << ", grade required to execute form: " << obj.getExecuteGrade();
    return oso;
}