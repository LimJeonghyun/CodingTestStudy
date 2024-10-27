#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<int> solution(vector<int> numbers)
{
    vector<int> answer;
    set<int> s;

    for (int i = 0; i < numbers.size(); i++)
    {
        for (int j = i + 1; j < numbers.size(); j++)
        {
            int num = numbers.at(i) + numbers.at(j);
            s.insert(num);
        }
    }

    for (auto itr = s.begin(); itr != s.end(); itr++)
    {
        answer.push_back(*itr);
    }

    sort(answer.begin(), answer.end());
    return answer;
}