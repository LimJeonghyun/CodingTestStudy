#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, m;
    int money[100001];

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> money[i];
    }

    int left = 0;
    int right = 1000000000;
    int k = 0;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        int sum = 1;
        int curr_money = mid;
        bool flag = false;

        // cout << mid << '\n';

        for (int i = 0; i < n; i++)
        {
            if (mid < money[i])
            {
                flag = true;
                left = mid + 1;
            }
            if (curr_money - money[i] >= 0)
            {
                curr_money -= money[i];
            }
            else
            {
                curr_money = mid - money[i];
                sum++;
            }
        }

        if (flag)
        {
            continue;
        }

        if (sum <= m)
        {
            right = mid - 1;
            k = mid;
        }
        else
        {
            left = mid + 1;
        }
    }

    cout << k << '\n';
}