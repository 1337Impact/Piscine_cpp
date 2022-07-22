#include "cast.hpp"


void displayChar( int c, int status){
    std::cout << "char: ";
    if (status)
    {
        if (c >= 32 && c <= 126)
            std::cout << static_cast<char>(c);
        else
            std::cout << "Non displayable";
    }
    else{
        std::cout << "impossible";
    }
    std::cout << std::endl;
}

void displayInt( int n, int status){
    std::cout << "int: ";
    if (status){
        std::cout << n;
    }
    else{
        std::cout << "impossible";
    }
    std::cout << std::endl;
}

void displayFloat( float n, int status){
    std::cout << "float: ";
    if (status){
        std::cout << n << 'f';
    }
    else{
        std::cout << "nanf";
    }
    std::cout << std::endl;
}

void displayDouble( double n, int status){
    std::cout << "float: ";
    if (status){
        std::cout << n;
    }
    else{
        std::cout << "nan";
    }
    std::cout << std::endl;
}