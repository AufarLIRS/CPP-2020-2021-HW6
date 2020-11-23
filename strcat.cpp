#include "strcat.h"
#include "string.h"

void strcat1(char* to, const char* from)
{
    to += strlen(to);

    while(*from != '\0')
    {
        *to = *from;
        to++;
        from++;
    }
    *to = '\0';
}

