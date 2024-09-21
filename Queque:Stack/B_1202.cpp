#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, k;
    vector<pair<int, int>> gems;
    vector<int> bag;
    priority_queue<int> q;

    cin >> n >> k;

    for (int i = 0, m, v; i < n; i++)
    {
        cin >> m >> v;
        gems.push_back({m, v});
    }

    for (int i = 0, w; i < k; i++)
    {
        cin >> w;
        bag.push_back(w);
    }

    sort(bag.begin(), bag.end());
    sort(gems.begin(), gems.end());

    long long result = 0;
    int idx = 0;

    for (int i = 0; i < k; i++)
    {
        while (idx < n && bag.at(i) >= gems[idx].first)
        {
            q.push(gems[idx].second);
            idx++;
        }
        if (!q.empty())
        {
            result += q.top();
            q.pop();
        }
    }

    cout << result << '\n';
}