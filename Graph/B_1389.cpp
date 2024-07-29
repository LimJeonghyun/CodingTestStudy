#include <iostream>
#include <vector>
#include <cstring>
#include <queue>

using namespace std;

vector<vector<int>> v;
vector<int> result;
int visited[101];

int bfs(int start)
{
    int sum = 0;
    queue<pair<int, int>> q;

    visited[start] = 1;
    q.push({start, 0});

    while (!q.empty())
    {
        int node = q.front().first;
        int dis = q.front().second;
        q.pop();

        sum += dis;

        for (int i = 0; i < v[node].size(); i++)
        {
            int next = v[node][i];

            if (!visited[next])
            {
                q.push({next, dis + 1});
                visited[next] = 1;
            }
        }
    }

    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, m;
    int friend1, friend2;
    int answer = 10000;

    cin >>
        n >> m;

    v.resize(n + 1);

    for (int i = 0; i < m; i++)
    {
        cin >> friend1 >> friend2;
        v[friend1].push_back(friend2);
        v[friend2].push_back(friend1);
    }

    for (int i = 1; i < v.size(); i++)
    {
        memset(visited, 0, sizeof(visited));
        result.push_back(bfs(i));
    }

    for (int i = 0; i < result.size(); i++)
    {
        answer = min(answer, result.at(i));
    }

    for (int i = 0; i < result.size(); i++)
    {
        if (answer == result.at(i))
        {
            cout << i + 1 << '\n';
            break;
        }
    }
}