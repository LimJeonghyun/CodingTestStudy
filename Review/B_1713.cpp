#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

map<int, pair<int, int>> picture;

void insert(int candidate, int time)
{
    if (picture.find(candidate) != picture.end())
    {
        picture[candidate].first++;
    }
    else
    {
        picture[candidate].first = 1;
        picture[candidate].second = time;
    }
}

bool cmp1(pair<int, pair<int, int>> &a, pair<int, pair<int, int>> &b)
{
    if (a.second.first == b.second.first)
    {
        return a.second.second < b.second.second;
    }
    return a.second.first < b.second.first;
}

void erase(int candidate, int time)
{
    if (picture.find(candidate) != picture.end())
    {
        picture[candidate].first++;
    }
    else
    {
        // 추천순
        vector<pair<int, pair<int, int>>> v(picture.begin(), picture.end());
        sort(v.begin(), v.end(), cmp1);
        auto it = v.begin();
        picture.erase(v[0].first);
        insert(candidate, time);
    }
}

int main()
{
    int N, recommend;

    cin >> N >> recommend;

    for (int i = 0; i < recommend; i++)
    {
        int candidate;

        cin >> candidate;

        if (picture.size() < N)
        {
            insert(candidate, i);
        }
        else
        {
            erase(candidate, i);
        }
    }

    for (auto it = picture.begin(); it != picture.end(); it++)
    {
        cout << it->first << ' ';
    }
}