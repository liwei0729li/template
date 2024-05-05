#include <iostream>
#include "demo1.hpp"

int main()
{
    // int a = 10;
    // Demo<a, 5> demo; // error: the value of 'a' is not usable in a constant expression
    Demo<10, 5> demo;
    std::cout << sizeof(demo) << std::endl;
    return 0;
}