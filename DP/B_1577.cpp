#include <iostream>

using namespace std;

long long dp[101][101];
int broken[205][205];
int dx[2] = {-1, 0};
int dy[2] = {0, -1};

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, m, k;
    int a, b, c, d;

    cin >> n >> m >> k;

    dp[0][0] = 1;

    for (int i = 0; i < k; i++)
    {
        cin >> a >> b >> c >> d;
        broken[a + c][b + d] = 1;
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                int nx = i + dx[k];
                int ny = j + dy[k];

                if (nx >= 0 && nx <= n && ny >= 0 && ny <= m)
                {
                    if (broken[nx + i][ny + j] != 1)
                    {
                        dp[i][j] += dp[nx][ny];
                    }
                }
            }
        }
    }

    cout << dp[n][m] << '\n';
}