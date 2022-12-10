#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{ 

	char Alphabet1[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char Alphabet2[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	char Alphabet3[27] = "abcdefghijklmnopqrstuvwxyz";
	char Alphabet4[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char str1[500];
	char str2[100];
	char str3[100];
	int Symbol = 0, Number = 0;
	cout << "Incert speech: ";
	gets_s(str1);
	cout << "Incert a looking word: ";
	gets_s(str2);
	cout << "Incert a new word: ";
	gets_s(str3);
		
    
	
	cout << "New speech: " << endl;
	cout << str1;
	cout << endl;

	for (int i = 0; i < strlen(str1); i++)
	{
		if (i == 0) str1[i] = toupper(str1[i]);
		if (str1[i] == '.' && str1[i + 1] == ' ') str1[i + 2] = toupper(str1[i + 2]);
		if (str1[i] == '.' && str1[i + 1] != ' ') str1[i + 1] = toupper(str1[i + 1]);
	}
	cout << "To Upper case: " << endl;
	cout << str1;
	cout << endl;

	for (int i = 0; i < 26; i++)
	{
		for (int j = 0; j < strlen(str1); j++)
		{
			if (Alphabet3[i] == str1[j] || Alphabet4[i] == str1[j]) Symbol += 1;			
		}
		cout << "The number of Letter " << Alphabet3[i] << " in speech is " << Symbol << endl;
		Symbol = 0;
	}

	for (int i = 0; i < strlen(str1); i++) if (isdigit(str1[i]) == 1) Number += 1;
	cout << "The Number of digits in speech is " << Number << endl;

	return 0;
}