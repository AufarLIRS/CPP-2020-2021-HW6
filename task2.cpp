#include "task2.h"
char* resize(char* str, unsigned size, unsigned new_size)
{
    if (size > new_size) {
        return nullptr;

    }
    char* new_str = new char[new_size];

    for (int i = 0; i < size; i++) {
        new_str[i] = str[i];
    }
    new_str[new_size] = '\0';
    return new_str;

}
