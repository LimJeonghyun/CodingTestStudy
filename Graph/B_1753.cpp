#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int V, E, K;
    vector<pair<int, int>> node[20001];
    int dist[20001];

    cin >> V >> E >> K;

    for (int i = 0; i < E; i++)
    {
        int v1, v2, cost;

        cin >> v1 >> v2 >> cost;

        node[v1].push_back({v2, cost});
    }

    for (int i = 1; i <= V; i++)
    {
        dist[i] = 987654321;
    }

    priority_queue<pair<int, int>> pq;

    pq.push({0, K});
    dist[K] = 0;

    while (!pq.empty())
    {
        int Cost = -pq.top().first;
        int Cur = pq.top().second;
        pq.pop();

        for (int i = 0; i < node[Cur].size(); i++)
        {
            int next = node[Cur][i].first;
            int nCost = node[Cur][i].second;

            if (dist[next] > Cost + nCost)
            {
                dist[next] = Cost + nCost;
                pq.push({-dist[next], next});
            }
        }
    }

    for (int i = 1; i <= V; i++)
    {
        if (dist[i] == 987654321)
        {
            cout << "INF" << '\n';
        }
        else
        {
            cout << dist[i] << '\n';
        }
    }
}