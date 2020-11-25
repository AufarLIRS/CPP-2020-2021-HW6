#include "task1.h"

void task1::strcat(char* to, const char* from)
{
  size_t lenght_to = strlen(to);
  size_t lenght_from = strlen(from);
  for (unsigned i = 0; i <= lenght_from; i++)
  {
    to[lenght_to + i] = *from;
    from++;
  }
  to[lenght_to + lenght_from + 1] = '\0';
}
