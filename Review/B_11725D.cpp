#include <iostream>
#include <vector>

using namespace std;

vector<int> v[100001];
bool visited[100001] = {
    false,
};
int answer[100001];

void DFS(int parent)
{
    visited[parent] = true;

    for (int i = 0; i < v[parent].size(); i++)
    {
        int child = v[parent][i];

        if (!visited[child])
        {
            answer[child] = parent;
            DFS(child);
        }
    }
}

int main()
{
    int N;

    cin >> N;

    for (int i = 0; i < N - 1; i++)
    {
        int x, y;

        cin >> x >> y;

        v[x].push_back(y);
        v[y].push_back(x);
    }

    DFS(1);

    for (int i = 2; i <= N; i++)
    {
        cout << answer[i] << '\n';
    }
}