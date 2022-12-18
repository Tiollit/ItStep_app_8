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

int main()
{	
string text, word, new_text_reverse, new_text_reversespeech;	
cout << "Insert speech: " << endl;
getline(cin, text);
cout << "Insert word: " << endl;
getline(cin, word);
int n = LookForWords(text.c_str(), word.c_str());
cout << "The number of word: " << word << " in text is: " << n << endl;

return 0;  
}