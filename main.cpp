#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int LookForWords(const char* text, const char* word)
{
	bool triger = true;
	int n = 0;
	uint32_t index;
	for (size_t i = 0, j = 0; i < strlen(text); i++)
	{
		triger = true;
		if (text[i] == word[j])
		{
			index = i;
			for (; j < strlen(word); j++)
			{
				if (text[index] != word[j])
				{
					triger = false;
					break;
				}				
				index++;
			}	
			if (triger != false)
			{
				n += 1;				
			}
		}		
	}
	return n;
}

int NofSpeeches(const char* text)
{
	for (size_t i = 0; i < strlen(text); i++)
	{
      
    }
}

string reverse(const char* text, char* new_text_reverse)
{
	string temp;
	for (size_t i = 0; i < strlen(text); i++)
	{
		new_text_reverse[i] = text[strlen(text) - i];		
	}
	cout << "New reversed text is: " << new_text_reverse << endl;
	return 0;
}

string reverse_2(const char* text, char* new_text_reversespeech)
{
	string temp;
	for (size_t i = 0; i < strlen(text); i++)
	{
		new_text_reversespeech[i] = text[strlen(text) - i];
	}
	cout << "New reversed text is: " << new_text_reversespeech << endl;
	return 0;
}

int main()
{	
string text, word, new_text_reverse, new_text_reversespeech;	
cout << "Insert speech: " << endl;
getline(cin, text);
cout << "Insert word: " << endl;
getline(cin, word);
int n = LookForWords(text.c_str(), word.c_str());
cout << "The number of word: " << word << " in text is: " << n << endl;
string reverse(text.c_str(), new_text_reverse.c_str());
string reverse_2(text.c_str(), new_text_reversespeech.c_str());

return 0;  
}