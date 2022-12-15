#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	int a;
	char str1[500], str2[100];
	char str3[] = "1234567890";
	cout << "Incert 2 speeches: ";
	cout << "Speech 1:";
	gets_s(str1);
	cout << "Speech 2:";
	gets_s(str2);

	if (strcmp(str1, str2) == 0) cout << "Speeches the same";
	else if (strcmp(str1, str2) == 1) cout << "str1 more then str2";
	else cout << "str2 more then str1";
	a = StringToNumber(str3);                   // функція конвертує рядок у число та повертає це число
	char* NumberToString(int number);                 // функція конвертує число в рядок і повертає покажчик на цей рядок
	char* Uppercase(char* str1);                      // функція перетворює рядок у верхній регістр
	char* Lowercase(char* str1);                      // функція перетворює рядок у нижній регістр
	char* mystrrev(char* str);                        // функція реверсує рядок і повертає покажчик на новий рядок
	 
	return 0;
}