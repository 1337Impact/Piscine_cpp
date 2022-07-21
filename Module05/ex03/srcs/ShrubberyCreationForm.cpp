#include  "../headers/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
:Form("ShrubberyCreationForm", target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & obj)
:Form(obj)
{
}
ShrubberyCreationForm & ShrubberyCreationForm::operator = ( const ShrubberyCreationForm & obj)
{
	Form::operator=(obj);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}



void ShrubberyCreationForm::action(const Bureaucrat& executor)
{
	this->execute(executor);
    std::ofstream tFile(this->getTarget() + "_shrubbery");
    if (tFile.fail()){
        std::cout << "Error: " << std::strerror(errno) << std::endl;
        return ;
    }
    tFile << "               ,@@@@@@@,						" << std::endl;
	tFile << "       ,,,.   ,@@@@@@/@@,  .oo8888o.			" << std::endl;
	tFile << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o		" << std::endl;
	tFile << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'		" << std::endl;
	tFile << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'		" << std::endl;
	tFile << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'		" << std::endl;
	tFile << "   `&%\\ ` /%&'    |.|        \\ '|8'			" << std::endl;
	tFile << "       |o|        | |         | |				" << std::endl;
	tFile << "       |.|        | |         | |				" << std::endl;
	tFile << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_	" << std::endl;   
}