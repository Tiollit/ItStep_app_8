#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	char str1[500];
	char str2[500];
	cout << "Incert speech: ";
	gets_s(str1);
	cout << "Incert a word: ";
	gets_s(str2);

	for (int i = 0; i < strlen(str1); i++)
	{
		char* word = strstr(str1, str2);
		if (*word != 0)
		{
			strcpy(word, str2);
		}
	}
	cout << "New speech: " << endl;
	cout << str1;

	for (int i = 0; i < strlen(str1); i++)
	{
		if (str1[i] == ".")		
	}

	return 0;
}