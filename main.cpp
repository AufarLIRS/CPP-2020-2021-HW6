#include <iostream>
#include "strcat.h"
#include "resize.h"

int main()
{
  char a[] = "Oh Hi";
  char b[] = " Mark!";
  strcat(a, b);
  std::cout << a << std::endl;
  char* c = new char[9];
  char* d = resize(c, 9, 10);
  delete[] d;
  return 0;
}
