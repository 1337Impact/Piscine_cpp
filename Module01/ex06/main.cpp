#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl    obj;
    int index = 0;
    std::string harls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    if (ac != 2){
        std::cout << "Error: Invalid number of argument" << std::endl;
        return 1;
    }
    while (index < harls->length()){
        if (av[1] == harls[index])
            break;
        index++;
    }
    switch (index)
    {
        case 0:
            std::cout << "[ " << harls[0] << " ]" << std::endl;
            obj.complain(harls[0]);
        case 1:
            std::cout << "[ " << harls[1] << " ]" << std::endl;
            obj.complain(harls[1]);
        case 2:
            std::cout << "[ " << harls[2] << " ]" << std::endl;
            obj.complain(harls[2]);
        case 3:
            std::cout << "[ " << harls[3] << " ]" << std::endl;
            obj.complain(harls[3]);
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]"
                    << std::endl;
    }
}