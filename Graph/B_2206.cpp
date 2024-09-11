#include <iostream>
#include <queue>

using namespace std;

int N, M;
int map[1001][1001][2];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
queue<pair<int, pair<int, int>>> q;

int bfs()
{
    q.push({0, {0, 0}});

    while (!q.empty())
    {
        int breakWall = q.front().first;
        int x = q.front().second.first;
        int y = q.front().second.second;
        q.pop();

        // cout << x << ' ' << y << '\n';

        if (x == N - 1 && y == M - 1)
        {
            return map[x][y][breakWall] + 1;
        }

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M)
            {
                continue;
            }
            if (breakWall == 0 && map[nx][ny][0] == 1)
            {
                map[nx][ny][breakWall + 1] = map[x][y][breakWall] + 1;
                q.push({1, {nx, ny}});
            }
            else if (map[nx][ny][0] == 0)
            {
                if (breakWall == 1 && map[nx][ny][breakWall])
                {
                    continue;
                }
                map[nx][ny][breakWall] = map[x][y][breakWall] + 1;
                q.push({breakWall, {nx, ny}});
            }
        }
    }
    return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        string tmp;
        cin >> tmp;
        for (int j = 0; j < M; j++)
        {
            map[i][j][0] = tmp[j] - '0';
        }
    }

    cout << bfs() << '\n';
}