//_CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	char str[100] = "This is test version of C++. 1234567890.";
	char Num[100] = "1234567890";
	char New[100];

	cout << "Lenght of str is: " << strlen(str) << " Length of Num is: " << strlen(Num) << endl;
	strcpy(New, str);
	cout << "Copy of str is: " << New << endl;

	strcat(New, Num);
	cout << "Combining New and Num arrays: " << New << endl;
	cout << "First time symbol C meets in New array is: " << strchr(New, 'C') << endl;
	cout << "First time Num meets in New array is: " << strstr(New, Num) << endl;
    return 0;
}