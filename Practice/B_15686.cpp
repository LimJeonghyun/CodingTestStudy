#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<pair<int, int>> house;
vector<pair<int, int>> chicken;
int result = 100000000;

int check(vector<int> v)
{
    int count = 0;

    for (auto loc : house)
    {
        int mn = 2 * n;
        for (int i : v)
        {
            mn = min((abs(loc.first - chicken[i].first) + abs(loc.second - chicken[i].second)), mn);
        }
        count += mn;
    }

    return count;
}

void combi(int cnt, vector<int> v)
{
    if (v.size() == m)
    {
        result = min(result, check(v));
        return;
    }

    for (int i = cnt; i < chicken.size(); i++)
    {
        v.push_back(i);
        combi(i + 1, v);
        v.pop_back();
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int tmp;

            cin >> tmp;
            if (tmp == 1)
            {
                house.push_back({i, j});
            }
            else if (tmp == 2)
            {
                chicken.push_back({i, j});
            }
        }
    }

    vector<int> v;
    combi(0, v);

    cout << result << '\n';
}