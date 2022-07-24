#include "easyfind.hpp"

int main()
{
    int n = 12;
    std::vector<int> value;
    value.push_back(12);
    value.push_back(10);
    value.push_back(20);
    val();
    try
    {
        easyfind(value, n);
        std::cout << n << ": Has Been Found" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
}