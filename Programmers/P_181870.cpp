#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> strArr)
{
    vector<string> answer;

    for (int i = 0; i < strArr.size(); i++)
    {
        if (strArr[i].find("ad") < strArr[i].size())
        {
            continue;
        }
        else
        {
            answer.push_back(strArr[i]);
        }
    }
    return answer;
}