#include "Template.hpp"
#include <iostream>

int main( void )
{
    int a = 10;
    int b = 20;
    char aa = 'a';
    char bb = 'b';

    std::cout << "--------------------- INT ----------------------" << std::endl;
    std::cout << "Value of a : " << a << " ||| Value of b : " << b << std::endl;
    std::cout << "Swap called" << std::endl;
    swap<int>(a, b);
    std::cout << "Value of a : " << a << " ||| Value of b : " << b << std::endl;
    std::cout << "min function called. Result : " << min<int>(a, b) << std::endl;
    std::cout << "max function called. Result : " << max<int>(a, b) << std::endl;
    std::cout << "--------------------- CHAR ----------------------" << std::endl;
    std::cout << "Value of a : " << aa << " ||| Value of b : " << bb << std::endl;
    std::cout << "Swap called" << std::endl;
    swap<char>(aa, bb);
    std::cout << "Value of a : " << aa << " ||| Value of b : " << bb << std::endl;
    std::cout << "min function called. Result : " << min<char>(aa, bb) << std::endl;
    std::cout << "max function called. Result : " << max<char>(aa, bb) << std::endl;
    return (0);
}
