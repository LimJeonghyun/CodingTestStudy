#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int N;
    vector<int> v[100001];
    bool visited[100001] = {
        false,
    };
    int answer[100001];

    cin >> N;

    for (int i = 0; i < N - 1; i++)
    {
        int x, y;

        cin >> x >> y;

        v[x].push_back(y);
        v[y].push_back(x);
    }

    visited[1] = true;
    queue<int> q;
    q.push(1);

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        for (int i = 0; i < v[parent].size(); i++)
        {
            int child = v[parent][i];

            if (!visited[child])
            {
                visited[child] = true;
                q.push(child);
                answer[child] = parent;
            }
        }
    }

    for (int i = 2; i <= N; i++)
    {
        cout << answer[i] << '\n';
    }
}