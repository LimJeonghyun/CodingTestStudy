#include <iostream>

using namespace std;

int leftCard[2001];
int rightCard[2001];
int dp[2001][2001];

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;

    cin >> n;

    for (int i = n; i > 0; i--)
    {
        cin >> leftCard[i];
    }

    for (int i = n; i > 0; i--)
    {
        cin >> rightCard[i];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]);
            if (leftCard[i] > rightCard[j])
            {
                dp[i][j] = max(dp[i][j], dp[i][j - 1] + rightCard[j]);
            }
        }
    }

    cout << dp[n][n] << '\n';
}