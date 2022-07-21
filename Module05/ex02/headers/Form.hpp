#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string _name;
	const std::string _target;
	bool            _signed;
	const int		_sGrade;
	const int		_eGrade;
public:
	Form();
	Form( std::string name, int sGrade, int eGrade);
	Form( std::string name, std::string target, int sGrade, int eGrade);
	Form( const Form &obj);
	Form & operator = ( const Form &obj);
	~Form();

	//getters
	std::string getName( void ) const;
	std::string getTarget( void ) const;
	bool        isSigned( void ) const;
	int         getSignGrade( void ) const;
	int         getExecuteGrade( void ) const;

	//mumber functions
	void    beSigned( const Bureaucrat & obj);
	void execute(Bureaucrat const & executor) const;
	virtual void action(const Bureaucrat& executor)  = 0;

	//exception classes
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
	class FormAlreadySignedException: public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class FormNotSignedException: public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

std::ostream& operator << (std::ostream& oso, const Form& obj);

#endif