#include "resize.h"

char* resize(char* str, unsigned size, unsigned new_size)
{
    if(new_size < size)
        return nullptr;

    unsigned i = 0;

    char* new_string = new char[new_size];

    while(i < size)
    {
        new_string[i] = str[i];
        i++;
    }

    delete[] str;
    return new_string;
}
