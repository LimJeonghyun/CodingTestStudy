#include <iostream>

using namespace std;

long long coin[100001];
long long dp[100001];

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, k;

    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        cin >> coin[i];
    }

    for (int i = 1; i <= k; i++)
    {
        dp[i] = 123456789;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = coin[i]; j <= k; j++)
        {
            dp[j] = min(dp[j], dp[j - coin[i]] + 1);
        }
    }
    if (dp[k] == 123456789)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << dp[k] << '\n';
    }
}