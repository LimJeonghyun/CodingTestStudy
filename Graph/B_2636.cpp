#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

int M, N;
int map[101][101];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int result, cheeseTime = 0;
bool visited[101][101];

bool bfs()
{
    visited[0][0] = true;

    int cnt = 0;

    queue<pair<int, int>> q;
    q.push({0, 0});
    cheeseTime++;

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= M || ny < 0 || ny >= N)
            {
                continue;
            }
            if (!visited[nx][ny])
            {
                if (map[nx][ny] == 0)
                {
                    q.push({nx, ny});
                }
                else
                {
                    map[nx][ny] = 0;
                    cnt++;
                }
                visited[nx][ny] = 1;
            }
        }
    }

    if (cnt == 0)
    {
        cout << --cheeseTime << '\n'
             << result << '\n';
        return true;
    }
    else
    {
        result = cnt;
        return false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    cin >> M >> N;

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> map[i][j];
        }
    }

    while (true)
    {
        if (bfs())
        {
            break;
        }
        memset(visited, false, sizeof(visited));
    }
}