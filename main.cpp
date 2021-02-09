#include <iostream>

using namespace std;


void task1(char* to, const char* from){
	int ixto = 0;
	while(to[ixto] != '\0') {
		ixto++;
	}
	int ixfrom = 0;
	while(from[ixfrom] != '\0'){
		to[ixto] = from[ixfrom];
		ixto++;
		ixfrom++;
	} 
	to[ixto] = '\0';
}


char* task2(char* str, unsigned size, unsigned new_size){
	if(new_size < size){
		return nullptr;
	}
	char* new_str = new char[new_size];
	for(unsigned int i = 0; i < size; i++){
		new_str[i] = str[i];
	}
	delete[] str;
	return new_str;
}


int main()
{
    char c1[20] = "hello";
    char c2[] = "world";
    task1(c1,c2);
    cout << c1 << endl;
    
    unsigned int size = 8;
    char* s1 = new char[size];
    *s1 = 'a'; 
    char* s2 = task2(s1, size, 2);
    cout << *s1 << endl;
	cout << *s2 << endl;
    delete[] s2;

  return 0;
}
