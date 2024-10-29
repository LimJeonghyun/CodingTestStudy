#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    string s;
    int m = 0, o = 0, b = 0, i = 0, sc = 0;

    cin >> s;

    for (int j = 0; j < s.length(); j++)
    {
        if (s[j] == 'M')
        {
            m++;
        }
        if (s[j] == 'O')
        {
            o++;
        }
        if (s[j] == 'B')
        {
            b++;
        }
        if (s[j] == 'I')
        {
            i++;
        }
        if (s[j] == 'S')
        {
            sc++;
        }
    }

    if (m && o && b && i && sc)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
}