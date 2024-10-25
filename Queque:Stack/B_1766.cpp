#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int isDone[32001];
vector<int> v[32001];

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int N, M;

    cin >> N >> M;

    for (int i = 0, a, b; i < M; i++)
    {
        cin >> a >> b;

        isDone[b]++;
        v[a].push_back(b);
    }

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 1; i <= N; i++)
    {
        if (!isDone[i])
        {
            pq.push(i);
        }
    }

    while (!pq.empty())
    {
        int problem = pq.top();
        pq.pop();

        cout << problem << ' ';

        for (int i = 0; i < v[problem].size(); i++)
        {
            int next = v[problem][i];
            isDone[next]--;

            if (!isDone[next])
            {
                pq.push(next);
            }
        }
    }
}