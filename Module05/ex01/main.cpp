#include "Bureaucrat.hpp"


int main(){
    std::string name = "theGreatest";
    std::string name2 = "notGreatest";
    Bureaucrat gt(name, 1);
    Bureaucrat gt2 = Bureaucrat(name, 150);

    try{
        gt.decrementGrade();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    try{
        gt2.decrementGrade();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << gt << std::endl;
    std::cout << gt2 << std::endl;
}