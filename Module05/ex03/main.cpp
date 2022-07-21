#include "./headers/PresidentialPardonForm.hpp"
#include "./headers/RobotomyRequestForm.hpp"
#include "./headers/ShrubberyCreationForm.hpp"
#include "./headers/Intern.hpp"
#include "./headers/Bureaucrat.hpp"


int main(){
    std::string name = "noName";
    std::string target = "theTarget";
    
    Intern someRandomIntern;
    Form* rrf;
    Bureaucrat b("theGreatest", 78);

    std::cout << "************* succes tests ****************" << std::endl;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    if (rrf){
        b.signForm(*rrf);
        b.executeForm(*rrf);
        std::cout << rrf->getName() << std::endl;
        std::cout << rrf->getTarget() << std::endl;
        std::cout << rrf->isSigned() << std::endl;
    }
    std::cout << "\n************* failed tests ****************" << std::endl;
    rrf = someRandomIntern.makeForm("no request", "Bender");
    if (rrf){
        b.signForm(*rrf);
        b.executeForm(*rrf);
        std::cout << rrf->getName() << std::endl;
        std::cout << rrf->getTarget() << std::endl;
        std::cout << rrf->isSigned() << std::endl;
    }

}