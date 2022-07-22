#include "data.hpp"

int main()
{
    Data d = {"Mohammed", "Benkhattab", 78};
    Data *dptr = &d;
    std::cout << dptr->firstName << " - "
            << dptr->lastName << " - "
            << dptr->age
            << std::endl;

    std::cout << "\nType Data*: " <<  dptr << std::endl;
    std::cout << "Type uintptr_t: " << serialize(dptr) << std::endl;

    Data *newptr = deserialize(serialize(dptr));
    std::cout << newptr->firstName << " - "
            << newptr->lastName << " - "
            << newptr->age
            << std::endl;
    
}