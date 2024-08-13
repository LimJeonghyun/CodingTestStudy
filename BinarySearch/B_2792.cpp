#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, m;
    int jewel[300001];

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> jewel[i];
    }

    sort(jewel, jewel + m);
    int left = 1;
    int right = jewel[m - 1];
    int result = 0;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        int count = 0;

        for (int i = 0; i < m; i++)
        {
            count += jewel[i] / mid;
            // if (jewel[i] % mid)
            // {
            //     count++;
            // }
        }

        if (count <= n)
        {
            right = mid - 1;
            result = mid + 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    cout << result << '\n';
}