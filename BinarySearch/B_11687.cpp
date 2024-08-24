#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int m;

    cin >> m;

    int left = 1;
    int right = m * 5;
    int result = 0;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        int count = 0;

        for (int i = 5; i <= mid; i *= 5)
        {
            count += (mid / i);
        }

        if (count >= m)
        {
            result = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    int count = 0;
    for (int i = 5; i <= result; i *= 5)
    {
        count += (result / i);
    }

    if (count == m)
    {
        cout << result << '\n';
        return 0;
    }
    else
    {
        cout << -1 << '\n';
    }
}