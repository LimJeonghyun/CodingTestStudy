#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(string s)
{
    vector<int> answer;
    string tmp = "";

    for (int i = 0; i < s.size(); i++)
    {
        int idx = tmp.find_last_of(s[i]);
        if (idx == -1)
        {
            answer.push_back(idx);
        }
        else
        {
            answer.push_back(i - idx);
        }
        // cout << idx << '\n';
        tmp += s[i];
    }
    return answer;
}