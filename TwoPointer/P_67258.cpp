#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> gems)
{
    vector<int> answer;

    set<string> setGems(gems.begin(), gems.end());
    int size = setGems.size();
    unordered_map<string, int> shopping;
    int start = 0;
    int end = 0;
    int minStart = -1;
    int minEnd = -1;

    for (auto &gem : gems)
    {
        shopping[gem]++;
        if (shopping.size() == size)
        {
            break;
        }
        end++;
    }

    minStart = start;
    minEnd = end;

    while (end < gems.size())
    {
        string key = gems.at(start);
        shopping[key]--;
        start++;

        if (shopping[key] == 0)
        {
            end++;
            for (; end < gems.size(); end++)
            {
                shopping[gems.at(end)]++;
                if (key == gems.at(end))
                {
                    break;
                }
            }
            if (end == gems.size())
            {
                break;
            }
        }
        if (minEnd - minStart > end - start)
        {
            minEnd = end;
            minStart = start;
        }
    }

    answer.push_back(minStart + 1);
    answer.push_back(minEnd + 1);
    return answer;
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    vector<string> gems = {"XYZ", "XYZ", "XYZ"};

    vector<int> answer = solution(gems);

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer.at(i) << '\n';
    }
}