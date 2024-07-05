#include <iostream>

using namespace std;

int dp[1500051];

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    int day, money;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> day >> money;

        dp[i + day] = max(dp[i + day], dp[i] + money);
        dp[i + 1] = max(dp[i], dp[i + 1]);
    }

    cout << dp[n + 1] << '\n';
}