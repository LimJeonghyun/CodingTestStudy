#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int g;

    cin >> g;

    int start = 1;
    int end = 1;
    int result = 0;

    while (1)
    {
        int num = (start * start) - (end * end);
        if (num == g)
        {
            cout << start << '\n';
            result++;
        }
        if ((start - end) == 1 && num > g)
        {
            break;
        }
        else if (num > g)
        {
            end++;
        }
        else
        {
            start++;
        }
    }

    if (result == 0)
    {
        cout << -1 << '\n';
    }
}