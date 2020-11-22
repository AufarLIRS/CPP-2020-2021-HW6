#include "resize.h"
#include <assert.h>
#include <iostream>

char* resize(char* str, unsigned size, unsigned new_size)
{
  assert(new_size != 0);
  if (new_size < size)
    return nullptr;
  char* new_str = new char[new_size];
  std::memcpy(new_str, str, new_size);
  delete[] str;

  return new_str;
}
