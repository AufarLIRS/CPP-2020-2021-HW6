#include <iostream>
#include "strcat.cpp"
#include "resize.cpp"

using namespace std;

int main()
{
    char a[] = "Hello";
    char b[] = " it's me, Mario!";
    strcat(a, b);
    std::cout << a << std::endl;
    unsigned int size = 2;
    char* s1 = new char[size];
    *s1 = 's';
    std::cout << *s1 << std::endl;
    s1 = resize(s1, size, 4);
    std::cout << *s1 << std::endl;
    char* s2 = new char[4];
    std::cout << *s2 << std::endl;
    s2 = resize(s2, 4, 2);
    std::cout << *s2 << std::endl;
    delete[] s1;
    delete[] s2;
    return 1;
}
