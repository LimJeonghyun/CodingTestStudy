#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <queue>

using namespace std;

int cnt = 0;
int n, m;
int dist[101][101];
bool visited[101][101];
int map[101][101];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

void bfs(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = 1;
    dist[x][y] = 1;

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
            {
                continue;
            }
            if (!visited[nx][ny] && map[nx][ny] == 1)
            {
                q.push({nx, ny});
                dist[nx][ny] = dist[x][y] + 1;
                visited[nx][ny] = true;
            }
        }
    }
}

int main()
{

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string s;

        cin >> s;
        for (int j = 0; j < m; j++)
        {
            map[i][j] = s[j] - '0';
        }
    }

    bfs(0, 0);

    cout << dist[n - 1][m - 1] << '\n';
}