#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    int count = 0;

    getline(cin, word);

    if (word.length() == 1 && word[0] == ' ') {
		cout << 0;
		return 0;
	}

    for(int i = 0; i <  word.length(); i++)
    {
        // cout << word[i] << '\n';
        if (word[i] == ' ' && i != 0 && i != word.length() - 1)
        {
            count++;
        }
    }

    cout << count+1 << '\n';
}