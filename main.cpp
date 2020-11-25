#include <iostream>
#include "task1.h"
#include "task2.h"
using namespace std;

int main()
{
  // task1
  char str[] = "qwerty";
  char str2[] = "1234";
  task1::strcat(str, str2);
  std::cout << str << endl;

  // task2
  char* a = new char[12]{ '1', '2', '3', '4', '5', '6' };
  char* b = task2::resize(a, 12, 24);
  b[23] = '2';
  std::cout << b[23] << endl;
  delete[] b;
  return 0;
}
