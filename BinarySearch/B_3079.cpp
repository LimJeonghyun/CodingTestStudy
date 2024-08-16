#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    long long n, m;
    long long times[100001];
    long long maxNum = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> times[i];
        maxNum = max(maxNum, times[i]);
    }

    sort(times, times + n);

    long long left = 1;
    long long right = 1000000000000000000;
    long long result = 0;

    while (left <= right)
    {
        long long mid = (left + right) / 2;
        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += mid / times[i];
            if (sum > m)
                break;
        }

        if (sum >= m)
        {
            right = mid - 1;
            result = mid;
        }
        else
        {
            left = mid + 1;
        }
    }

    cout << result << '\n';
}