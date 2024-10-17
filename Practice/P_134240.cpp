#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food)
{
    string answer = "";

    for (int i = 1; i < food.size(); i++)
    {
        if (food.at(i) <= 1)
        {
            continue;
        }
        int count = food.at(i) / 2;

        for (int j = 0; j < count; j++)
        {
            answer += to_string(i);
        }
    }

    answer += '0';
    int len = answer.size() - 2;

    for (int i = len; i >= 0; i--)
    {
        answer += answer[i];
    }
    return answer;
}