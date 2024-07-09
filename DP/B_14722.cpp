#include <iostream>

using namespace std;

int milk[1001][1001];
int dp[3][1001][1001];

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    int dx[2] = {0, -1};
    int dy[2] = {-1, 0};

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> milk[i][j];

            if (milk[i][j] == 0)
            {
                dp[0][i][j] = 1;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                int nx = i + dx[k];
                int ny = j + dy[k];

                if (nx < 0 || ny < 0 || nx > n || ny > n)
                {
                    continue;
                }

                int currentMilk = milk[i][j];
                int prevMilk = (currentMilk + 2) % 3;

                dp[0][i][j] = max(dp[0][i][j], dp[0][nx][ny]);
                dp[1][i][j] = max(dp[1][i][j], dp[1][nx][ny]);
                dp[2][i][j] = max(dp[2][i][j], dp[2][nx][ny]);

                if (dp[prevMilk][nx][ny] > 0)
                {
                    dp[currentMilk][i][j] = max(dp[currentMilk][i][j], dp[prevMilk][nx][ny] + 1);
                }
            }
        }
    }

    cout << max(dp[0][n][n], max(dp[1][n][n], dp[2][n][n])) << '\n';
}