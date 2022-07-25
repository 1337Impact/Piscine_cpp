#include "MutantStack.hpp"
#include <list>

int main()
// my test
{
    MutantStack<int> g;

    g.push(2);
    g.push(3);
    g.push(12);

    std::cout << "top of stack value    => " << g.top() << std::endl;
    std::cout << "size of stack         => " << g.size() << std::endl;

    std::cout << "loop trough stack" << std::endl;
    MutantStack<int>::iterator it = g.begin();
    for (; it != g.end(); it++)
        std::cout << *it << std::endl;

    g.pop();
    std::cout << "value after pop       => " << g.top()  << std::endl;
    g.empty();
    std::cout << "loop trough stack" << std::endl;
    for (it = g.begin(); it != g.end(); it++)
        std::cout << *it << std::endl;
}
 // subject test
// {
//     MutantStack<int> mstack;
//     mstack.push(5);
//     mstack.push(17);
//     std::cout << mstack.top() << std::endl;
//     mstack.pop();
//     std::cout << mstack.size() << std::endl;
//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737);
//     //[...]
//     mstack.push(0);
//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//     std::cout << *it << std::endl;
//     ++it;
//     }
//     std::stack<int> s(mstack);
//     return 0;
// }
// // list test
// {
//     std::list<int> mstack;
//     mstack.push_back(5);
//     mstack.push_back(17);
//     std::cout << mstack.back() << std::endl;
//     mstack.pop_back();
//     std::cout << mstack.size() << std::endl;
//     mstack.push_back(3);
//     mstack.push_back(5);
//     mstack.push_back(737);
//     //[...]
//     mstack.push_back(0);
//     std::list<int>::iterator it = mstack.begin();
//     std::list<int>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     // std::stack<int> s(mstack);
//     return 0;
// }