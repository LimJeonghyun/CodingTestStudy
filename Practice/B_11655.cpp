#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    string s;

    getline(cin, s);

    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
        {
            if (s[i] >= 'N' && s[i] < 'a')
            {
                int num = abs(s[i] - 'A' - 13);
                cout << char('A' + num);
            }
            else if (s[i] >= 'n')
            {
                int num = abs(s[i] - 'a' - 13);
                cout << char('a' + num);
            }
            else
            {
                cout << char(s[i] + 13);
            }
        }
        else
        {
            cout << s[i];
        }
    }
}