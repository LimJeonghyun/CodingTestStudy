#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    vector<pair<long long, long long>> town;
    long long sum = 0;

    cin >> n;

    for (int i = 0, tmp1, tmp2; i < n; i++)
    {
        cin >> tmp1 >> tmp2;
        town.push_back({tmp1, tmp2});
        sum += tmp2;
    }

    sort(town.begin(), town.end());

    long long ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += town[i].second;
        if (ans >= (sum + 1) / 2)
        {
            cout << town[i].first << '\n';
            break;
        }
    }
}