#include <iostream>

using namespace std;

int r, c;
int result = 0;
char alpha[21][21];
bool visited[26];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

void dfs(int x, int y, int dist)
{
    bool canGo = false;

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= r || ny < 0 || ny >= c)
        {
            continue;
        }
        char nextAlpha = alpha[nx][ny];
        if (visited[nextAlpha - 'A'])
        {
            continue;
        }
        canGo = true;
        visited[nextAlpha - 'A'] = 1;
        dfs(nx, ny, dist + 1);
        visited[nextAlpha - 'A'] = 0;
    }

    if (!canGo)
    {
        result = max(result, dist);
        return;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    cin >> r >> c;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> alpha[i][j];
        }
    }

    char nextAlpha = alpha[0][0];
    visited[nextAlpha - 'A'] = 1;
    dfs(0, 0, 1);

    cout << result << '\n';
}