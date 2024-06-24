#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    string s, t;
    int result = 0;

    cin >> s >> t;

    int end = t.length() - 1;
    while(1)
    {
        if (s.length() == t.length())
        {
            if (s == t)
            {
                result = 1;
                break;
            }
            else
            {
                break;
            }
        }
        if (t[end] == 'B')
        {
            t.pop_back();
            end--;
            reverse(t.begin(), t.end());
            // cout << t << '\n';
        }
        else if (t[end] == 'A')
        {
            t.pop_back();
            end--;
            // cout << t << '\n';
        }
    }

    cout << result << '\n';
}