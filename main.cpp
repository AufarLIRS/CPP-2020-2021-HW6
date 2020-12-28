#include <iostream>

using namespace std;

void strcat(char* to, const char* from)
{
  int toidx = 0;
  while (to[toidx] != '\0')
  {
    toidx++;
  }
  int fromidx = 0;
  while (from[fromidx] != '\0')
  {
    to[toidx] = from[fromidx];
    toidx++;
    fromidx++;
  }
  to[toidx] = '\0';
}

char* resize(char* str, unsigned size, unsigned new_size)
{
  if (new_size < size)
  {
    return nullptr;
  }
  char* resized = new char[new_size];
  for (unsigned i = 0; i < size; i++)
  {
    resized[i] = str[i];
  }
  delete[] str;
  return resized;
}

int main()
{
  char a[10] = "aaaa";
  char b[] = "bbbb";
  strcat(a, b);
  std::cout << a << std::endl;

  char* s1 = new char[2];
  *s1 = 'r';
  char* s2 = resize(s1, 2, 3);
  std::cout << *s2 << std::endl;
  delete[] s2;
  return 0;
}
