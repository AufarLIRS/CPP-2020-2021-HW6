#include <iostream>
#include "strcat1.h"
#include "resize1.h"

int main()
{
  // task1
  char first[100] = "first";
  char second[100] = "second";

  strcat1(first, second);
  std::cout << first << std::endl;

  // task2
  unsigned int size = 4;
  char* str = new char[size];

  *str = 'a';
  str = resize1(str, size, 8);
  std::cout << str << std::endl;

  delete[] str;

  return 0;
}
