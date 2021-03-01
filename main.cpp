#include <iostream>
#include <task1.h>
#include <task2.h>

using namespace std;

int main()
{
    char str1[6] = "start";
    char str2[5] = "stop";

    strcat(str1, str2);
    char* str3 = resize(str1, 6, 10);
    cout << str3 << endl;
    delete[] str3;
    return 0;
}
