#include "Span.hpp"


int main()
{
    int arr[] = {32, 1, 3, 12};
    Span s(7);

    std::cout << "Capacity of span: " << s.getCapacity() << std::endl;
    s.addNumber(22);
    s.addNumber(1);
    s.addNumber(43);
    std::cout << "size of span: " << s.getSize() << std::endl;
    s.addNumbers(arr, 4);
    std::cout << "size of span: " << s.getSize() << std::endl;
   try
   {
       s.addNumber(34);
   }
   catch(std::exception & e)
   {
       std::cout << e.what() << std::endl;
   }

   std::cout << "shortest span: " << s.shortestSpan() << std::endl;
   std::cout << "longest span: " << s.longestSpan() << std::endl;

   std::vector<int> res = s.getArr();

   for (std::vector<int>::iterator it = res.begin(); it != res.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}
// subject tests
// {
//     Span sp = Span(5);
//     sp.addNumber(6);
//     sp.addNumber(3);
//     sp.addNumber(17);
//     sp.addNumber(9);
//     sp.addNumber(11);
//     std::cout << sp.shortestSpan() << std::endl;
//     std::cout << sp.longestSpan() << std::endl;
//     return 0;
// }