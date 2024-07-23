#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector<int> map[101];
int visited[101];

void dfs(int v)
{

    for (int i = 0; i < map[v].size(); i++)
    {
        int next = map[v][i];

        if (visited[next] == 0)
        {
            visited[next] = 1;
            dfs(next);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, way;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> way;

            if (way)
            {
                map[i].push_back(j);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        memset(visited, 0, sizeof(visited));
        dfs(i);

        for (int j = 0; j < n; j++)
        {
            cout << visited[j] << ' ';
        }
        cout << '\n';
    }
}