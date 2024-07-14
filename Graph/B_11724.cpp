
// dfs

#include <iostream>
#include <vector>

using namespace std;

vector<int> graph[1001];
bool visited[1001];

void dfs(int v)
{
    visited[v] = true;

    for (int i = 0; i < graph[v].size(); i++)
    {
        int tmp = graph[v][i];
        if (!visited[tmp])
        {
            dfs(tmp);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, m;
    int u, v;
    int result = 0;

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            result++;
            dfs(i);
        }
    }

    cout << result << '\n';
}

// bfs

// #include <iostream>
// #include <vector>
// #include <queue>

//     using namespace std;

//     vector<int> graph[1001];
//     bool visited[1001];

//     void bfs(int v)
//     {
//         queue<int> q;
//         q.push(v);
//         visited[v] = true;

//         while (!q.empty())
//         {
//             int tmp = q.front();
//             q.pop();

//             for (int i = 0; i < graph[tmp].size(); i++)
//             {
//                 if (!visited[graph[tmp][i]])
//                 {
//                     visited[graph[tmp][i]] = true;
//                     q.push(graph[tmp][i]);
//                 }
//             }
//         }
//     }

//     int main()
//     {
//         ios::sync_with_stdio(false);
//         cout.tie(NULL);
//         cin.tie(NULL);

//         int n, m;
//         int u, v;
//         int result = 0;

//         cin >> n >> m;

//         for (int i = 0; i < m; i++)
//         {
//             cin >> u >> v;
//             graph[u].push_back(v);
//             graph[v].push_back(u);
//         }

//         for (int i = 1; i <= n; i++)
//         {
//             if (!visited[i])
//             {
//                 result++;
//                 bfs(i);
//             }
//         }

//         cout << result << '\n';
//     }