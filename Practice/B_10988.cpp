#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    string word;
    int result = 1;

    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] != word[word.length() - i - 1])
        {
            result = 0;
            break;
        }
    }

    cout << result << '\n';
}