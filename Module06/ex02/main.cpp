#include <cstdlib>
#include "./headers/A.hpp"
#include "./headers/B.hpp"
#include "./headers/C.hpp"

int main()
{
    Base *base = generate();

    // Base *b type random by pointer
    identify(base);

    // Base *b type a by refrence
    Base *a = new A();
    identify(*a);
    // Base *c type c by refrence
    Base *c = new C();
    identify(*c);

    delete a;
    delete c;
    delete base;
}