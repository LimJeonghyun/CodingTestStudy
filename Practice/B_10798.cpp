#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    char word[5][15];

    for (int i = 0; i < 5; i++)
    {
        string s;

        cin >> s;
        for (int j = 0; j < s.size(); j++)
        {
            word[i][j] = s[j];
        }
        if (s.length() < 15)
        {
            for (int j = s.length(); j < 15; j++)
            {
                word[i][j] = '-';
            }
        }
    }

    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (word[j][i] != '-')
            {
                cout << word[j][i];
            }
        }
    }

    return 0;
}