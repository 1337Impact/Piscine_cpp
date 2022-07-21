#include "./headers/PresidentialPardonForm.hpp"
#include "./headers/RobotomyRequestForm.hpp"
#include "./headers/ShrubberyCreationForm.hpp"


int main(){
    std::string fName = "noName";
    std::string bName = "theGreatest";
    try{
        PresidentialPardonForm P("president");
        RobotomyRequestForm R("Robot");
        ShrubberyCreationForm S("Shrubbery");

        std::cout << "************ succes tests **************" << std::endl;
        Bureaucrat Bs(bName, 1);
        std::cout << "\n************ SingForm tests **************" << std::endl;
        Bs.signForm(P);
        Bs.signForm(R);
        Bs.signForm(S);
        std::cout << "\n************ executeForm tests **************" << std::endl;
        Bs.executeForm(P);
        Bs.executeForm(R);
        Bs.executeForm(S);

        PresidentialPardonForm Pf("president");
        RobotomyRequestForm Rf("Robot");
        ShrubberyCreationForm Sf("Shrubbery");
        std::cout << "\n************ failed tests **************" << std::endl;
        Bureaucrat Bf(bName, 150);
        std::cout << "\n************ SingForm tests **************" << std::endl;
        Bf.signForm(Pf);
        Bf.signForm(Rf);
        // Bf.signForm(Sf);
        std::cout << "\n************ executeForm tests **************" << std::endl;
        Bf.executeForm(Pf);
        Bf.executeForm(Rf);
        Bf.executeForm(Sf);
    }
    catch(std::exception & e){
        std::cout << e.what() << std::endl;
    }

    
}