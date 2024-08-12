#include <iostream>
#include <queue>

using namespace std;

int m, n, h;
int tomato[101][101][101];
int dz[6] = {0, 0, 0, 0, 1, -1};
int dx[6] = {0, 0, 1, -1, 0, 0};
int dy[6] = {1, -1, 0, 0, 0, 0};
queue<pair<pair<int, int>, int>> q;

void dfs()
{
    while (!q.empty())
    {
        int z = q.front().first.first;
        int x = q.front().first.second;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 6; i++)
        {
            int nz = z + dz[i];
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nz < 0 || nz >= h || nx < 0 || nx >= n || ny < 0 || ny >= m)
            {
                continue;
            }
            if (tomato[nz][nx][ny] == 0)
            {
                tomato[nz][nx][ny] = tomato[z][x][y] + 1;
                q.push({{nz, nx}, ny});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    cin >> m >> n >> h;

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                cin >> tomato[i][j][k];

                if (tomato[i][j][k] == 1)
                {
                    q.push({{i, j}, k});
                }
            }
        }
    }

    dfs();

    int result = 0;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                if (tomato[i][j][k] == 0)
                {
                    cout << -1 << '\n';
                    return 0;
                }
                if (result < tomato[i][j][k])
                {
                    result = tomato[i][j][k];
                }
            }
        }
    }

    cout << result - 1 << '\n';
}