#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, k;
    int makgeoli[10001];

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> makgeoli[i];
    }

    sort(makgeoli, makgeoli + n);

    long long left = 0;
    long long right = 2147483647;
    long long result = 0;

    while (left <= right)
    {
        long long mid = (left + right) / 2;
        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += makgeoli[i] / mid;
        }

        if (sum >= k)
        {
            left = mid + 1;
            result = mid;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << result << '\n';
}