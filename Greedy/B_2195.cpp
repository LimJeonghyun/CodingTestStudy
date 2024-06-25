#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    string s, p;
    int result = 0;
    string tmp = "";

    cin >> s >> p;

    for (int i = 0; i < p.length();)
    {
        int max_len = 0;
        for (int j = 0; j < s.length(); j++)
        {
            int tmp = 0;
            while (s[j + tmp] == p[i + tmp])
            {
                tmp++;
            }
            max_len = max(max_len, tmp);
        }
        i += max_len;
        result++;
    }

    cout << result << '\n';
}