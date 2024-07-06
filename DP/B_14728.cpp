#include <iostream>

using namespace std;

int sTime[101];
int point[101];
int dp[101][10001];

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, t;

    cin >> n >> t;

    for (int i = 1; i <= n; i++)
    {
        cin >> sTime[i] >> point[i];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= t; j++)
        {

            if (j < sTime[i])
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - sTime[i]] + point[i]);
            }
        }
    }
    cout << dp[n][t] << '\n';
}