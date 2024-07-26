#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int m, n, k;
int map[101][101];
int visited[101][101];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

vector<int> result;

int dfs(int x, int y)
{
    if (visited[x][y])
    {
        return 0;
    }
    visited[x][y] = 1;
    int answer = 1;

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= m || ny < 0 || ny >= n)
        {
            continue;
        }
        if (visited[nx][ny] || map[nx][ny])
        {
            continue;
        }
        answer += dfs(nx, ny);
    }
    return answer;
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    cin >> m >> n >> k;

    for (int i = 0; i < k; i++)
    {
        int start_x, start_y, end_x, end_y;

        cin >> start_x >> start_y >> end_x >> end_y;

        for (int j = start_y; j < end_y; j++)
        {
            for (int k = start_x; k < end_x; k++)
            {
                map[j][k] = 1;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (map[i][j] == 0 && visited[i][j] == 0)
            {
                // cout << dfs(i, j) << '\n';
                result.push_back(dfs(i, j));
            }
        }
    }

    sort(result.begin(), result.end());
    cout << result.size() << '\n';

    for (int i = 0; i < result.size(); i++)
    {
        cout << result.at(i) << ' ';
    }
}