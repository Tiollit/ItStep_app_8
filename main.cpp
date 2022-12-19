// Знайдіть і замініть входження деякого слова на задане слово
#include <iostream>
#include <string>
using namespace std;
std::string change_word_in_text(const char* text, const char* old_word, const char* new_word)
{
    string result;
    uint32_t index;
    bool trigger = true;
    for (size_t i = 0, j = 0; i < strlen(text); i++)
    {
        trigger = true;
        if (text[i] == old_word[j])
        {
            index = i;
            for (; j < strlen(old_word); j++)
            {
                if (text[index] != old_word[j])
                {
                    trigger = false;
                    break;
                }
                index++;
            }
            if (trigger != false)
            {
                result += new_word;
                i = index - 1;
            }
            else
            {
                j = 0;
                result += text[i];
            }
        }
        else
        {
            result += text[i];
        }
    }
    return result;
}
int main()
{
    string text, old_word, new_word;
    cout << "Input: ";
    getline(cin, text);
    cout << "Old word: ";
    getline(cin, old_word);
    cout << "New word: ";
    getline(cin, new_word);
    string res = change_word_in_text(text.c_str(), old_word.c_str(), new_word.c_str());
    cout << "Result = " << res << endl;
    return 0;

