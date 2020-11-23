#include <iostream>
#include "strcat.h"
#include "resize.h"

using namespace std;


int main()
{
    char first_string[100];
    char second_string[100];

    cout << "enter two strings: " << endl;
    cin >> first_string;
    cin >> second_string;

    strcat1(first_string, second_string);

    cout << first_string << endl;


    cout << "--------------------------" << endl;



    const unsigned SIZE = 4;
    char* str = new char[SIZE];

    *str = 'A';
    auto result = resize(str, SIZE, 8);
    cout << result << endl;

    delete[] result;




    return 0;
}
