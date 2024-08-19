#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, t;
    long long alcohol[1001][2];
    int result = -1;

    cin >>
        n >> t;

    for (int i = 0; i < n; i++)
    {
        cin >> alcohol[i][0] >> alcohol[i][1];
    }

    long long left = 1;
    long long right = 1000000000000;

    while (left <= right)
    {
        long long mid = (left + right) / 2;
        long long max_v = 0;
        long long min_v = 0;
        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            if (mid < alcohol[i][0])
            {
                flag = true;
                break;
            }
            max_v += (min(mid, alcohol[i][1]));
            min_v += alcohol[i][0];
        }
        if (flag)
        {
            left = mid + 1;
            continue;
        }
        if (min_v <= t && t <= max_v)
        {
            result = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    cout << result << '\n';
}