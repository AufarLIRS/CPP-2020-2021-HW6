#include <iostream>

using namespace std;

void strcat(char* to, const char* from)
{
    while (*to)
        to++;
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
    char *pointer;
    unsigned i = 0;

    if (new_size < size)
        return (nullptr);
    pointer = new char[new_size];
    while (i < size)
    {
        pointer[i] = str[i];
        i++;
    }
    delete[] str;
    return (pointer);
}

int main()
{
    char to[20] = "Hello \0";
    char from[] = "world!";
    strcat(to, from);
    printf("%s\n", to);
    return 0;
}
