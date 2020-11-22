#include <iostream>
#include "strcat1.h"
#include "resize.h"

int main()
{
  // scrcat1
  char str1[] = "Dias";
  char str2[] = "Bolatov";
  strcat1(str1, str2);
  std::cout << str1 << std::endl;

  // resize
  unsigned int size;
  std::cout << "Input the size = ";
  std::cin >> size;
  unsigned int new_size;
  std::cout << "Input the new_size = ";
  std::cin >> new_size;

  char* str = new char[size];
  std::cout << "Input the str = ";
  std::cin >> *str;
  char* new_str = resize(str, size, new_size);
  std::cout << *new_str << std::endl;
  std::cout << *str << std::endl;
  delete[] new_str;

  return 0;
}
