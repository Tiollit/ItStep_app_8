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

	int mystrcmp(const char* str1, const char* str2); // ������� ������� ��� �����, ��, ���� ����� ���, ������� 0, ���� ������ ����� � ������ �� ������, �� ������� 1, ������ - 1
	int StringToNumber(char* str1);                   // ������� �������� ����� � ����� �� ������� �� �����
	char* NumberToString(int number);                 // ������� �������� ����� � ����� � ������� �������� �� ��� �����
	char* Uppercase(char* str1);                      // ������� ���������� ����� � ������ ������
	char* Lowercase(char* str1);                      // ������� ���������� ����� � ����� ������
	char* mystrrev(char* str);                        // ������� ������� ����� � ������� �������� �� ����� �����
	 
	return 0;
}