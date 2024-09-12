#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector<int> v;
bool visited[100001];
bool done[100001];
int cnt = 0;

void dfs(int idx)
{
    int next = v[idx];
    visited[idx] = true;

    if (!visited[next])
    {
        dfs(next);
    }
    else if (!done[next])
    {
        for (int i = next; i != idx; i = v[i])
        {
            cnt++;
        }
        cnt++;
    }
    done[idx] = true;
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int T;

    cin >> T;

    for (int i = 0, n; i < T; i++)
    {
        cin >> n;

        v.resize(n + 1);

        for (int j = 1; j <= n; j++)
        {
            cin >> v[j];
        }

        for (int j = 1; j <= n; j++)
        {
            if (!visited[j])
            {
                dfs(j);
            }
        }

        cout << n - cnt << '\n';
        cnt = 0;
        memset(visited, false, sizeof(visited));
        memset(done, false, sizeof(done));
    }
}