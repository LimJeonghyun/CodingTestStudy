#include <iostream>

using namespace std;

int dp[100001];

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;

    cin >> n;

    dp[0] = 1;
    dp[1] = 3;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = (dp[i - 2] + dp[i - 1] * 2) % 9901;
    }

    cout << dp[n] % 9901 << '\n';
}