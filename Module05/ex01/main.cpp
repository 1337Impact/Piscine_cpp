#include "Form.hpp"


int main(){
    std::string fName = "noName";
    std::string bName = "theGreatest";
    try{
        std::cout << "tests for Form" << std::endl;
        Form        form(fName, 1, 12);
        std::cout << form.getName() << std::endl;
        std::cout << form.getSignGrade() << std::endl;
        std::cout << form.getExecuteGrade() << std::endl;
        std::cout << form.isSigned() << std::endl;
        std::cout << "tests for Bureucrat" << std::endl;
        Bureaucrat gt(bName, 1);
        std::cout << gt.getName() << std::endl;
        std::cout << gt.getGrade() << std::endl;
        gt.incrementGrade(); // should throw exception
        gt.decrementGrade(); 
        gt.signForm(form);
        std::cout << form.isSigned() << std::endl;
    }
    catch(std::exception & e){
        std::cout << e.what() << std::endl;
    }

    
}