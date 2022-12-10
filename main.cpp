#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	int a;
	char str1[500], str2[500];
	cout << "Incert 2 speeches: ";
	cout << "Speech 1:";
	gets_s(str1);
	cout << "Speech 2:";
	gets_s(str2);

	int mystrcmp(const char* str1, const char* str2); // функція порівнює два рядки, та, якщо рядки рівні, повертає 0, якщо перший рядок є більшим за другий, то повертає 1, інакше - 1
	int StringToNumber(char* str1);                   // функція конвертує рядок у число та повертає це число
	char* NumberToString(int number);                 // функція конвертує число в рядок і повертає покажчик на цей рядок
	char* Uppercase(char* str1);                      // функція перетворює рядок у верхній регістр
	char* Lowercase(char* str1);                      // функція перетворює рядок у нижній регістр
	char* mystrrev(char* str);                        // функція реверсує рядок і повертає покажчик на новий рядок
	 
	return 0;
}