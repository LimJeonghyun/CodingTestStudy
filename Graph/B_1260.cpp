#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int graph[1001][1001];
int visitedD[1001];
int visitedB[1001];

int n, m;

void dfs(int v)
{
    visitedD[v] = true;
    cout << v << ' ';

    for (int i = 1; i <= n; i++)
    {

        if (!visitedD[i] && graph[v][i] == 1)
        {
            dfs(i);
        }
    }
}

void bfs(int v)
{
    queue<int> q;
    q.push(v);
    visitedB[v] = true;

    cout << v << ' ';

    while (!q.empty())
    {
        int next = q.front();
        q.pop();

        for (int i = 1; i <= n; i++)
        {
            if (!visitedB[i] && graph[next][i] == 1)
            {
                q.push(i);
                visitedB[i] = true;
                cout << i << ' ';
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int v;

    cin >> n >> m >> v;

    for (int i = 0, a, b; i < m; i++)
    {
        cin >> a >> b;

        graph[a][b] = 1;
        graph[b][a] = 1;
    }

    dfs(v);

    cout << '\n';

    bfs(v);

    cout << '\n';
}