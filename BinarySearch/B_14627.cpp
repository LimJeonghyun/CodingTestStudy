#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int S, C;
    long long total = 0;
    long long greenOnion[1000001];

    cin >> S >> C;

    for (int i = 0; i < S; i++)
    {
        cin >> greenOnion[i];
        total += greenOnion[i];
    }

    long long left = 1;
    long long right = 1000000000;
    long long result = 0;

    while (left <= right)
    {
        long long mid = (left + right) / 2;
        long long sum = 0;

        // cout << mid << '\n';
        for (int i = 0; i < S; i++)
        {
            sum += greenOnion[i] / mid;
        }

        if (sum >= C)
        {
            left = mid + 1;
            result = mid;
        }
        else
        {
            right = mid - 1;
        }
    }

    long long ramen = total - result * C;
    cout << ramen << '\n';
}
