#include "replace.hpp"

int main(int ac, char **av){
    if (ac != 4){
        std::cout << "invalid number of argument" << std::endl;
        return 1;
    }
    std::string file_name(av[1]);
    std::string str1(av[2]);
    std::string str2(av[3]);

    std::ifstream from(file_name);

    if (from.fail()){
        std::cout << "Error: " << std::strerror(errno) << std::endl;
        return 1;
    }
    std::ofstream to(file_name.append(".replace"));
    if (from.fail()){
        std::cout << "Error: " << std::strerror(errno) << std::endl;
        return 1;
    }

    std::string line;
    int found;
    while ( from.good())
    {
        std::getline(from, line);
        found = line.find(str1);
        if (found != -1){
            line.erase(found, str1.length());
            line.insert(found, str2);
        }
        to << line << '\n';

    }
    from.close();
    to.close();
}