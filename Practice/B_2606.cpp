#include <iostream>
#include <queue>

using namespace std;

int computer[101][101];
int cnt = 0;
int n;
bool visited[101];
queue<int> q;

void bfs(int v)
{
    q.push(v);
    visited[v] = true;

    while (!q.empty())
    {
        v = q.front();
        q.pop();

        for (int i = 1; i <= n; i++)
        {
            if (computer[v][i] == 1 && visited[i] == 0)
            {
                q.push(i);
                visited[i] = true;
                cnt++;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int pair;
    int a, b;

    cin >> n >> pair;

    for (int i = 0; i < pair; i++)
    {
        cin >> a >> b;

        computer[a][b] = 1;
        computer[b][a] = 1;
    }

    bfs(1);

    cout << cnt << '\n';
}