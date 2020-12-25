#include "resize1.h"

char* resize1(char* str, unsigned size, unsigned new_size)
{
  if (new_size < size)
  {
    return nullptr;
  }

  char* newstr = new char[new_size];
  for (unsigned i = 0; i < size; i++)
  {
    newstr[i] = str[i];
  }
  delete[] str;
  return newstr;
}
