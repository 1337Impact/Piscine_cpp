#include "cast.hpp"

int main(int ac, char **av)
{
    double a;

    if (ac != 2)
    {
        std::cout << "Wrong number of argumet" << std::endl;
        return 1;
    }
    try
    {
        a  = std::stod(av[1]);
        displayChar(static_cast<int>(a), 1);
        displayInt(static_cast<int>(a), 1);
        displayFloat(static_cast<float>(a), 1);
        displayDouble(a, 1);
    }
    catch (std::exception & e)
    {
        displayChar(static_cast<int>(a), 0);
        displayInt(static_cast<int>(a), 0);
        displayFloat(static_cast<float>(a), 0);
        displayDouble(a, 0);
    }
}