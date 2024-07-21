#include <iostream>
#include <queue>

using namespace std;

int dx[8] = {-2, -1, 1, 2, -2, -1, 1, 2};
int dy[8] = {-1, -2, -2, -1, 1, 2, 2, 1};

int n;
int target_x, target_y;
bool visited[301][301];
int dist[301][301];

void bfs(int curr_x, int curr_y)
{
    visited[curr_x][curr_y] = true;
    queue<pair<int, int>> q;

    q.push({curr_x, curr_y});

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 8; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < n && visited[nx][ny] == 0)
            {
                visited[nx][ny] = true;
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
}

void reset()
{
    for (int i = 0; i <= 300; i++)
    {
        for (int j = 0; j <= 300; j++)
        {
            visited[i][j] = false;
            dist[i][j] = 0;
        }
    }
}

int main()
{
    int t;
    int curr_x, curr_y;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> curr_x >> curr_y;
        cin >> target_x >> target_y;

        bfs(curr_x, curr_y);
        cout << dist[target_x][target_y] << '\n';
        reset();
    }
}