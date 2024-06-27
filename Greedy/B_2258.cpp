#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
    {
        return a.first > b.first;
    }
    return a.second < b.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, m;
    int total_price = 2147483647;
    vector<pair<int, int>> meat;

    cin >> n >> m;

    for (int i = 0, tmp1, tmp2; i < n; i++)
    {
        cin >> tmp1 >> tmp2;

        meat.push_back({tmp1, tmp2});
    }

    sort(meat.begin(), meat.end(), cmp);

    int sum_w = 0;
    int sum_p = 0;
    int before = -1;

    for (int i = 0; i < n; i++)
    {
        if (sum_w < m)
        {
            if (before == meat.at(i).second)
            {
                sum_p += meat.at(i).second;
            }
            else
            {
                before = sum_p = meat.at(i).second;
            }
        }
        else
        {
            if ((before != meat.at(i).second) && (sum_p >= meat.at(i).second))
            {
                before = sum_p = meat.at(i).second;
            }
        }
        sum_w += meat.at(i).first;
    }

    if (sum_w < m)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << sum_p << '\n';
    }
}