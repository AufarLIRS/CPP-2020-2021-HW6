#include <iostream>

using namespace std;

void strcat(char *to, const char *from)
{
    while(*to != 0) {
        ++to; //проходим по строке, к которой подцепляем новую
    }
    do {
        *to = *from; // сцепляем строки
    } while(++to, *from++ != 0); // пока не достигнем конца
}

char *resize(const char *str, unsigned size, unsigned newSize)
{
    char * new_str = new char[newSize];
    for(unsigned int i = 0; i < size && i < newSize; ++i)
        new_str[i] = str[i];
    delete[] str;

    return new_str;
}

int main()
{
      char a[10] = "stro";
      char b[] = "ka";
      strcat(a, b);
      std::cout << a << std::endl;

      char* s1 = new char[2];
      *s1 = 'r';
      char* s2 = resize(s1, 2, 3);
      std::cout << *s2 << std::endl;
      delete[] s2;
      return 0;
}
