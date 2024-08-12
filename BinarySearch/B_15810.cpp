#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, m;
    int staff[1000001];

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> staff[i];
    }

    long long left = 0;
    long long right = 1000000000000; // 1000000명의 스태프가 1000000개의 풍선을 만들 때
    long long result = 0;

    while (left <= right)
    {
        long long mid = (left + right) / 2;
        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += mid / staff[i];
        }

        if (sum >= m)
        {
            result = mid; // 최소한의 시간
            right = mid - 1;
        }
        else
        {
            // 최대한의 시간
            left = mid + 1;
        }
    }

    cout << result << '\n';
}