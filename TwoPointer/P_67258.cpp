#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <unordered_map>

using namespace std;

#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

vector<int> solution(vector<string> gems)
{
    vector<int> answer;

    set<string> setGems(gems.begin(), gems.end());
    int size = setGems.size();

    // cout << size << '\n';

    int start = 0;
    int end = 0;
    int minStart = -1;
    int minEnd = -1;
    set<string> shopping;
    // shopping.insert(gems.at(start));

    while (1)
    {
        if (start >= gems.size() && end >= gems.size())
        {
            break;
        }
        shopping.insert(gems.at(end));
        if (shopping.size() == size)
        {
            if (minStart >= 0 && minEnd >= 0)
            {
                if (minEnd - minStart > end - start)
                {
                    minStart = start;
                    minEnd = end;
                }
            }
            else
            {
                minStart = start;
                minEnd = end;
            }
            // cout << start << ' ' << end << '\n';
            // for_each(shopping.begin(), shopping.end(), [](string n)
            //          { cout << n << endl; });
            shopping.clear();
            start++;
            end = start;
            continue;
        }
        end++;
        if (end >= gems.size())
        {
            start++;
            end = start;
        }
        // cout << "**" << start << ' ' << end << '\n';
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

    vector<string> gems = {"ZZZ", "YYY", "NNNN", "YYY", "BBB"};

    vector<int> answer = solution(gems);

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer.at(i) << '\n';
    }
}