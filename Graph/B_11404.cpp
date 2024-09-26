#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, m;
    int node[101][101];

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                node[i][j] = 0;
                continue;
            }
            node[i][j] = 987654321;
        }
    }

    for (int i = 0; i < m; i++)
    {
        int v1, v2, cost;

        cin >> v1 >> v2 >> cost;
        node[v1][v2] = min(node[v1][v2], cost);
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                node[i][j] = min(node[i][j], node[i][k] + node[k][j]);
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (node[i][j] == 987654321)
            {
                cout << '0' << ' ';
                continue;
            }
            cout << node[i][j] << ' ';
        }

        cout << '\n';
    }
}