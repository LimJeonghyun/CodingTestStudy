#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int visited[201];

void dfs(int v, int n, vector<vector<int>> computers)
{
    visited[v] = true;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i] && computers[v][i] == 1)
        {
            dfs(i, n, computers);
        }
    }
}

int solution(int n, vector<vector<int>> computers)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            dfs(i, n, computers);
            count++;
        }
    }

    return count;
}

int main()
{
    vector<vector<int>> computers = {{1, 1, 0}, {1, 1, 0}, {0, 0, 1}};
    int n = 3;

    int result = solution(n, computers);

    cout << result << '\n';
}