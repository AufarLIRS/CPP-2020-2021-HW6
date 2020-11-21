#include <iostream>

void strcat(char* to, const char* from)
{
  int counter_to = 0;
  int counter_from = 0;
  while (to[counter_to] != 0)
  {
    counter_to++;
  }
  while (from[counter_from] != 0)
  {
    to[counter_to] = from[counter_from];
    counter_to++;
    counter_from++;
  }
  to[counter_to] = 0;
}

void strcat2(char* to, const char* from)  // just interesting implementation
{
  while (*to)  // *to == false when *to == 0
    to++;
  while (*from)  // *from == false when *from == 0
  {
    *to = *from;
    to++;
    from++;
  }
  *to = 0;
}

char* resize(char* str, unsigned size, unsigned new_size)
{
  if (new_size < size)
    return nullptr;
  char* new_str = new char[new_size];
  for (unsigned int i = 0; i < size; i++)
  {
    new_str[i] = str[i];
  }
  delete[] str;
  return new_str;
}

int main()
{
  char c1[30] = "you";
  char c2[] = "me";
  strcat(c1, c2);
  // strcat2(c1, c2);
  std::cout << c1 << std::endl;

  std::cout << std::endl;

  unsigned int size = 2;
  char* s1 = new char[size];
  *s1 = 'a';
  char* s2 = resize(s1, size, 4);
  // char* s2 = resize(s1, size, 1);
  std::cout << *s1 << std::endl;
  std::cout << *s2 << std::endl;
  delete[] s2;

  return 0;
}
