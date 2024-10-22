#include <iostream>
#include <vector>

using namespace std;

vector<int> v[1001];
bool visited[1001];

void dfs(int idx)
{
    if (visited[idx])
    {
        return;
    }

    visited[idx] = true;

    for (int i = 0; i < v[idx].size(); i++)
    {
        int next = v[idx][i];

        if (!visited[next])
        {
            dfs(next);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int T;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N;
        int answer = 0;

        cin >> N;

        for (int j = 1; j <= N; j++)
        {
            v[j].clear();
            visited[j] = false;
        }

        for (int j = 1, num; j <= N; j++)
        {
            cin >> num;

            v[j].push_back(num);
        }

        for (int j = 1; j <= N; j++)
        {
            if (!visited[j])
            {
                dfs(j);
                answer++;
            }
        }

        cout << answer << '\n';
    }
}