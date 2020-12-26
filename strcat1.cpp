#include "strcat1.h"

void strcat1(char* to, const char* from)
{
  while (*to)
    to++;
  while (*from)
  {
    *to = *from;
    to++;
    from++;
  }
}
