#include "Array.hpp"

int main()
{

    std::cout << "template with no parameter" << std::endl;
    Array<int> n;
    // std::cout << n[0] << std::endl;
    std::cout << n.size() << std::endl;

    std::cout << "template with type int" << std::endl;
    Array<int> a(12);
    a[0] = 69;
    std::cout << a[0] << std::endl;
    std::cout << a.size() << std::endl;

    std::cout << "template with type char" << std::endl;
    Array<char> b(12);
    b[0] = 'B';
    std::cout << b[0] << std::endl;
    std::cout << b.size() << std::endl;

    std::cout << "template with type string" << std::endl;
    Array<std::string> c(12);
    c[0] = "hello world";
    std::cout << c[0] << std::endl;
    std::cout << c.size() << std::endl;

}