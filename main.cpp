#include <iostream>
#include "lib.h"
using namespace std;

int main()
{
  int i;
  char* mas = new char[5];

  i = 0;
  mas[0] = '0';
  mas[1] = '1';
  mas[2] = '2';
  mas[3] = '3';
  mas[4] = '4';
  while (i < 5)
  {
    std::cout << mas[i];
    i++;
  }
  char* newmas = resize(mas, 5, 8);
  i = 0;
  newmas[7] = '7';
  newmas[6] = '6';
  newmas[5] = '5';
  while (i < 8)
  {
    std::cout << newmas[i];
    i++;
  }
  return 0;
}
