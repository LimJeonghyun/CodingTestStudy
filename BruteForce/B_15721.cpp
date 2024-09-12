#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int A, T, flag;
    string s = "";

    cin >>
        A >> T >> flag;

    for (int i = 1; i <= 1000; i++)
    {
        s += "0101";
        string tmp = "";

        for (int j = 0; j < i + 1; j++)
        {
            tmp += "0";
        }
        s += tmp;

        tmp = "";
        for (int j = 0; j < i + 1; j++)
        {
            tmp += "1";
        }
        s += tmp;
    }

    int cnt = 0;
    if (flag == 0)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                cnt++;
                if (cnt == T)
                {
                    cout << i % A << '\n';
                    break;
                }
            }
        }
    }
    else if (flag == 1)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                cnt++;
                if (cnt == T)
                {
                    cout << i % A << '\n';
                    break;
                }
            }
        }
    }
}