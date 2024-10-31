#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int map[26][26];
bool visited[26][26];
int cnt = 0;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int dfs(int x, int y)
{
    visited[x][y] = true;
    cnt++;

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= N || ny < 0 || ny >= N)
        {
            continue;
        }

        if (visited[nx][ny] == 0 && map[nx][ny] == 1)
        {
            dfs(nx, ny);
        }
    }
    return cnt;
}

int main(int argc, char **argv)
{
    int answer = 0;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < N; j++)
        {
            map[i][j] = s[j] - '0';
        }
    }

    vector<int> result;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (map[i][j] == 1 && visited[i][j] == 0)
            {
                answer++;
                cnt = 0;
                result.push_back(dfs(i, j));
            }
        }
    }

    sort(result.begin(), result.end());

    cout << answer << '\n';

    for (int i = 0; i < result.size(); i++)
    {
        cout << result.at(i) << '\n';
    }
    return 0;
}