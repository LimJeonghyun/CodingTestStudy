#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, m;

    while (1)
    {
        cin >> n >> m;

        if (n == 0 && m == 0)
        {
            break;
        }

        int max_score = 0;
        map<int, int> players;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0, tmp; j < m; j++)
            {
                cin >> tmp;

                players[tmp] += 1;

                if (max_score <= players[tmp])
                {
                    max_score = players[tmp];
                }
            }
        }

        int second_score = 0;
        for (auto itr = players.begin(); itr != players.end(); itr++)
        {
            if (itr->second == max_score)
            {
                continue;
            }
            second_score = max(second_score, itr->second);
        }

        vector<int> result;
        for (auto itr = players.begin(); itr != players.end(); itr++)
        {
            if (itr->second == second_score)
            {
                result.push_back(itr->first);
            }
        }

        sort(result.begin(), result.end());

        for (int i = 0; i < result.size(); i++)
        {
            cout << result.at(i) << ' ';
        }
        cout << '\n';
    }
}