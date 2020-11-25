#include <iostream>
#include "strcat.h"
#include "resize.h"
int main()
{
    char from[] = "Hello";
    char to[] = " world";
    customStrcat(from, to);
    std:: cout << from << std::endl;
    int size = 4;
    char* string1 = new char[size];
    *string1  = 'F';
    char* string2 = resize(string1, size, 10);
    std::cout << string2 << std::endl;
    delete [] string2;
    return 0;
}
