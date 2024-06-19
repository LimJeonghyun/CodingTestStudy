#include <iostream>

using namespace std;

int num[21];

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    string order;

    cin >> n;

    for (int i = 0, tmp; i < n; i++)
    {
        cin >> order;

        if (order == "add")
        {
            cin >> tmp;

            if (!num[tmp])
            {
                num[tmp] = 1;
            }
        }
        else if (order == "remove")
        {
            cin >> tmp;

            if (num[tmp])
            {
                num[tmp] = 0;
            }
        }
        else if (order == "check")
        {
            cin >> tmp;

            if (num[tmp])
            {
                cout << 1 << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
        else if (order == "toggle")
        {
            cin >> tmp;

            if (num[tmp])
            {
                num[tmp] = 0;
            }
            else
            {
                num[tmp] = 1;
            }
        }
        else if (order == "all")
        {
            for (int j = 1; j <= 20; j++)
            {
                num[j] = 1;
            }
        }
        else if (order == "empty")
        {
            for (int j = 1; j <= 20; j++)
            {
                num[j] = 0;
            }
        }
    }
}