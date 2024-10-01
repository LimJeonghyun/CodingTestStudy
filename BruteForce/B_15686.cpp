#include <iostream>
#include <vector>

using namespace std;

int n, m;
int answer = 100000000;
vector<pair<int, int>> house;
vector<pair<int, int>> chicken;

int check(vector<int> v)
{
    int count = 0;

    for (auto h : house)
    {
        int mn = 2 * n;
        for (int i : v)
        {
            mn = min((abs(h.first - chicken[i].first) + abs(h.second - chicken[i].second)), mn);
        }

        count += mn;
    }
    return count;
}

void combi(int idx, vector<int> v)
{
    if (v.size() == m)
    {
        answer = min(answer, check(v));
        return;
    }

    for (int i = idx; i < chicken.size(); i++)
    {
        v.push_back(i);
        combi(i + 1, v);
        v.pop_back();
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0, tmp; j < n; j++)
        {
            cin >> tmp;

            if (tmp == 1)
            {
                house.push_back({i, j});
            }
            if (tmp == 2)
            {
                chicken.push_back({i, j});
            }
        }
    }

    vector<int> v;

    combi(0, v);

    cout << answer << '\n';
}