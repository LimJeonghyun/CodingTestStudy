#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> todo_list, vector<bool> finished)
{
    vector<string> answer;

    for (int i = 0; i < finished.size(); i++)
    {
        if (finished.at(i) == false)
        {
            answer.push_back(todo_list.at(i));
        }
    }

    return answer;
}