#include <iostream>
#include <queue>

using namespace std;

int tomato[1001][1001];
int m, n;
int result = 0;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

queue<pair<int, int>> q;

void dfs()
{
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;

        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= n || nx < 0 || ny >= m || ny < 0)
            {
                continue;
            }
            if (tomato[nx][ny] == 0)
            {
                tomato[nx][ny] = tomato[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    cin >> m >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> tomato[i][j];
            if (tomato[i][j] == 1)
            {
                q.push({i, j});
            }
        }
    }

    dfs();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (tomato[i][j] == 0)
            {
                cout << -1 << '\n';
                return 0;
            }
            if (result < tomato[i][j])
            {
                result = tomato[i][j];
            }
        }
    }

    cout << result - 1 << '\n';
}