#include <iostream>
#include <queue>

using namespace std;

int n, m;
int map[101][101];
int visited[101][101];
int dist[101][101];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void bfs(int start_x, int start_y)
{
    visited[start_x][start_y] = 1;
    queue<pair<int, int>> q;
    q.push({start_x, start_y});
    dist[start_x][start_y]++;

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;

        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny] && map[nx][ny] == 1)
            {
                q.push({nx, ny});
                visited[nx][ny] = 1;
                dist[nx][ny] = dist[x][y] + 1;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int count = 100;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string tmp;
        cin >> tmp;

        for (int j = 0; j < m; j++)
        {
            map[i][j] = tmp[j] - '0';
        }
    }

    bfs(0, 0);

    cout << dist[n - 1][m - 1] << '\n';
}