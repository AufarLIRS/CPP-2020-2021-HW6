#include "lib.h"

char* resize(char* str, unsigned size, unsigned new_size)
{
  unsigned i = 0;
  if (new_size < size)
    return (nullptr);

  char* mas = new char[new_size];

  while (i < size)
  {
    mas[i] = str[i];
    i++;
  }
  delete[] str;
  return (mas);
}
