#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

map<int, pair<int, int>> m;

void insert(int candidate, int time)
{
    if (m.find(candidate) != m.end())
    {
        m[candidate].first++;
    }
    else
    {
        m[candidate].first = 1;
        m[candidate].second = time;
    }
}

bool cmp1(const pair<int, pair<int, int>> &a, const pair<int, pair<int, int>> &b)
{
    if (a.second.first == b.second.first)
    {
        return a.first < b.first;
    }
    return a.second.first < b.second.first;
}

bool cmp2(const pair<int, pair<int, int>> &a, const pair<int, pair<int, int>> &b)
{
    if (a.second.second == b.second.second)
    {
        return a.first < b.first;
    }
    return a.second.second < b.second.second;
}

void erase(int candidate, int time)
{
    if (m.find(candidate) != m.end())
    {
        m[candidate].first++;
        return;
    }

    vector<pair<int, pair<int, int>>> v1(m.begin(), m.end());
    sort(v1.begin(), v1.end(), cmp1);

    int recommend = v1[0].second.first, cnt = 0;

    for (auto it : v1)
    {
        if (it.second.first == recommend)
        {
            cnt++;
        }
    }

    if (cnt == 1)
    {
        m.erase(v1[0].first);
    }

    else
    {
        map<int, pair<int, int>> same_r;

        for (auto it : v1)
        {
            if (recommend == it.second.first)
            {
                same_r[it.first].first = it.second.first;
                same_r[it.first].second = it.second.second;
            }
        }

        vector<pair<int, pair<int, int>>> v2(same_r.begin(), same_r.end());
        sort(v2.begin(), v2.end(), cmp2);

        m.erase(v2[0].first);
    }

    insert(candidate, time);
}

int main()
{
    int N;
    int student;
    vector<int> answer;

    cin >> N;
    cin >> student;

    for (int i = 0; i < student; i++)
    {
        int candidate;
        cin >> candidate;

        if (m.size() < N)
        {
            insert(candidate, i);
        }
        else
        {
            erase(candidate, i);
        }
    }

    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << ' ';
    }
}