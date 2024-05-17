#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    string findWord;
    // int count = 0;

    getline(cin, word);
    getline(cin, findWord);

    int index = 0;
    int count = 0;
    while (1)
    {
        index = word.find(findWord, index);
        if (index == string::npos)
            break;
        count++;
        index += findWord.length();
    }

    cout
        << count << '\n';
}