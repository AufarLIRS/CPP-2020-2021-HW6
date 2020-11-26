#include <StringTask.h>

void strcat(char* to, const char* from)
{
    while (*to)
    {
        to++;
    }

    while (*from)
    {
        *to = *from;
        to++;
        from++;
    }
    *to = '\0';
}

char* resize(char* str, unsigned size, unsigned new_size)
{
    if (new_size < size)
    {
        return nullptr;
    }

    char* newstr = new char[new_size];
    for (unsigned int i = 0; i < size; i++)
    {
        newstr[i] = str[i];
    }

    delete[] str;
    return newstr;
}
