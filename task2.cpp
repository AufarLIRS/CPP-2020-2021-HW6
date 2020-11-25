#include "task2.h"

char* task2::resize(char* str, unsigned size, unsigned new_size)
{
  if (new_size < size)
    return nullptr;
  char* new_str = new char[new_size];
  for (unsigned i = 0; i < size; i++)
  {
    new_str[i] = str[i];
  }
  delete[] str;
  return new_str;
}
