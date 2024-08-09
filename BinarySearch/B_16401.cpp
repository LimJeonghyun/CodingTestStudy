#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int m, n;
    int snack[1000001];

    cin >> m >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> snack[i];
    }

    sort(snack, snack + n);

    int left = 1;
    int right = snack[n - 1];
    int result = 0;
    bool flag = false;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += snack[i] / mid;
        }

        if (sum >= m)
        {
            result = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << result << '\n';
}