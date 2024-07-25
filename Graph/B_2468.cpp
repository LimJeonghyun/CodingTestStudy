#include <iostream>
#include <queue>

using namespace std;

int n;
int map[101][101];
int visited[101][101];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int cnt = 0;
queue<pair<int, int>> q;

void dfs(int h)
{
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        visited[x][y] = 1;

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= n || ny < 0 || ny >= n)
            {
                continue;
            }
            if (map[nx][ny] > h && visited[nx][ny] == 0)
            {
                q.push({nx, ny});
                visited[nx][ny] = 1;
            }
        }
    }
}

void reset()
{
    cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = 0;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int result = 0;
    int maxHeight = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> map[i][j];

            if (maxHeight < map[i][j])
            {
                maxHeight = map[i][j];
            }
        }
    }

    for (int h = 0; h <= maxHeight; h++)
    {
        // cout << h << '\n';
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (map[i][j] > h && visited[i][j] == 0)
                {
                    q.push({i, j});
                    dfs(h);
                    cnt++;
                }
            }
        }
        if (result < cnt)
        {
            result = cnt;
        }
        reset();
    }

    cout << result << '\n';
}