#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	int a;
	char str1[500], str2[500];
	char str3[] = "1234567890";
	cout << "Incert 2 speeches: ";
	cout << "Speech 1:";
	gets_s(str1);
	cout << "Speech 2:";
	gets_s(str2);

	if (strcmp(str1, str2) == 0) cout << "Speeches the same" << endl;
	else if (strcmp(str1, str2) == 1) cout << "str1 more then str2" << endl;
	else cout << "str2 more then str1" << endl;
	char* StringToNumber(char *str3);                 // ������� �������� ����� � ����� �� ������� �� �����
	char* NumberToString(int number);                 // ������� �������� ����� � ����� � ������� �������� �� ��� �����
	toupper(str1[2]);                                   // ������� ���������� ����� � ������ ������
	cout << "Upper Case symbol #2 str1: " << str1 << endl;
    tolower(str2[2]);                                   // ������� ���������� ����� � ����� ������
	cout << "Lower Case symbol #2 str2: " << str2 << endl;
	_strrev(str3);                                    // ������� ������� ����� � ������� �������� �� ����� �����
	cout << "Reverse of str3: " << str3 << endl;
	return 0;
}