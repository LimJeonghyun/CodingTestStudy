#include <iostream>
#include <algorithm>

using namespace std;

int dis[10001];
int negIndex = 0;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, m;
    int result = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> dis[i];
        if (dis[i] < 0)
        {
            negIndex++;
        }
    }

    sort(dis, dis + n);

    for (int i = n - 1; i >= negIndex; i -= m)
    {
        result += (dis[i] * 2);
        // cout << result << ' ' << dis[i] << '\n';
    }
    for (int i = 0; i < negIndex; i += m)
    {
        result += abs(dis[i] * 2);
        // cout << result << ' ' << dis[i] << '\n';
    }

    result -= max(abs(dis[0]), abs(dis[n - 1]));

    cout << result << '\n';
}