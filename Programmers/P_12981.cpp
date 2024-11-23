#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

vector<int> solution(int n, vector<string> words)
{
    vector<int> answer;
    char end = words[0][words[0].size() - 1];
    bool check = true;
    int idx = 2;
    int turn = 1;
    map<string, int> m;
    m[words[0]]++;

    for (int i = 1; i < words.size(); i++)
    {
        if (idx > n)
        {
            idx = 1;
            turn++;
        }
        if (end != words[i][0])
        {
            check = false;
            answer.push_back(idx);
            answer.push_back(turn);
            break;
        }

        else if (m[words[i]])
        {
            check = false;
            answer.push_back(idx);
            answer.push_back(turn);
            break;
        }
        end = words[i][words[i].size() - 1];
        idx++;
        m[words[i]]++;
    }

    if (check)
    {
        answer.push_back(0);
        answer.push_back(0);
    }

    return answer;
}