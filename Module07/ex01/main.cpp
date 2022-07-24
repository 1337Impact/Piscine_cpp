#include "whatever.hpp"

void displayInt(int n){
    std::cout << n << std::endl;
}

void displayChar(char c){
    std::cout << c << std::endl;
}

void displayStr(std::string str){
    std::cout << str << std::endl;
}

int main()
{
    std::cout << "tests with arr of ints" << std::endl;
    int arr1[] = {12, 213, 2342, 532, -34};
    iter(arr1, 5, displayInt);
    std::cout << "tests with arr or chars" << std::endl;
    char arr2[] = "hello world";
    iter(arr2, 11, displayChar);
    std::cout << "tests with arr or strings" << std::endl;
    std::string arr3[] = {"hello", "world"};
    iter(arr3, 2, displayStr);
}