// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> v[100001];
// bool visited[100001];
// int arr[100001];

// void dfs(int node)
// {
//     visited[node] = true;

//     for (int i = 0; i < v[node].size(); i++)
//     {
//         int next = v[node][i];
//         if (!visited[next])
//         {
//             arr[next] = node;
//             dfs(next);
//         }
//     }
// }

// int main()
// {
//     int N;
//     int x, y;

//     cin >> N;

//     for (int i = 0; i < N - 1; i++)
//     {
//         cin >> x >> y;
//         v[x].push_back(y);
//         v[y].push_back(x);
//     }

//     dfs(1);

//     for (int i = 2; i <= N; i++)
//     {
//         cout << arr[i] << '\n';
//     }
// }

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> v[100001];
bool visited[100001];
int arr[100001];

void bfs()
{
    queue<int> q;
    visited[1] = true;
    q.push(1);

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        for (int i = 0; i < v[parent].size(); i++)
        {
            int next = v[parent][i];
            if (!visited[next])
            {
                q.push(next);
                arr[next] = parent;
                visited[next] = true;
            }
        }
    }
}

int main()
{
    int N;
    int x, y;

    cin >> N;

    for (int i = 0; i < N - 1; i++)
    {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    bfs();

    for (int i = 2; i <= N; i++)
    {
        cout << arr[i] << '\n';
    }
}