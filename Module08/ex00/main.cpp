#include "easyfind.hpp"

int main()
{
    typedef std::vector<int> cont;
    cont obj;
    obj.push_back(12);
    obj.push_back(10);
    obj.push_back(20);
    try
    {
        cont::iterator name = easyfind(obj, 12);
        std::cout << *name << ": Has Been Found" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    try
    {
        cont::iterator name = easyfind(obj, 15);
        std::cout << *name << ": Has Been Found" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
}