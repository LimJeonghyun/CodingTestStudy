#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, m;
    int lamp[100001];

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> lamp[i];
    }

    int left = 0;
    int right = 100000;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        int flag = 0;

        if (mid < lamp[0])
        {
            flag = 1;
        }
        for (int i = 0; i < m - 1; i++)
        {
            if (lamp[i + 1] - lamp[i] > mid * 2)
            {
                flag = 1;
                break;
            }
        }

        if (mid < n - lamp[m - 1])
        {
            flag = 1;
        }

        if (flag)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << left << '\n';
}