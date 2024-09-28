#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b)
{
    return a.second > b.second;
}

bool cmp2(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}

vector<int> solution(vector<string> genres, vector<int> plays)
{
    vector<int> answer;
    map<string, int> gen;

    for (int i = 0; i < genres.size(); i++)
    {
        gen[genres.at(i)] += plays[i];
    }

    vector<pair<string, int>> vec(gen.begin(), gen.end());
    sort(vec.begin(), vec.end(), cmp);

    for (int i = 0; i < vec.size(); i++)
    {
        map<int, int> popular;
        for (int j = 0; j < genres.size(); j++)
        {
            if (vec.at(i).first == genres.at(j))
            {
                cout << plays.at(j) << '\n';
                popular[j] = plays.at(j);
            }
        }

        vector<pair<int, int>> vec2(popular.begin(), popular.end());
        sort(vec2.begin(), vec2.end(), cmp2);
        cout << vec2.size() << '\n';
        answer.push_back(vec2.at(0).first);
        if (vec2.size() > 1)
        {
            answer.push_back(vec2.at(1).first);
        }
    }

    return answer;
}

int main()
{

    vector<string> genres;
    vector<int> plays;

    genres.push_back("classic");
    genres.push_back("pop");
    genres.push_back("classic");
    genres.push_back("classic");
    genres.push_back("pop");

    plays.push_back(500);
    plays.push_back(600);
    plays.push_back(150);
    plays.push_back(800);
    plays.push_back(2500);

    vector<int>
        answer = solution(genres, plays);

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer.at(i);
    }
}