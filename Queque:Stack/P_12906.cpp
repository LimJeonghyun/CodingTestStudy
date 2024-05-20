#include <vector>
#include <iostream>
#include <queue>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    queue<int> q;

    q.push(arr.at(0));
    for (int i = 1; i < arr.size(); i++)
    {
        int top = q.front();
        if (top != arr.at(i))
        {
            answer.push_back(top);
            q.pop();
            q.push(arr.at(i));
        }
    }
    if (!q.empty())
        answer.push_back(q.front());

    return answer;
}

int main()
{
    vector<int> arr = {4, 4, 4, 3, 3};

    vector<int> answer = solution(arr);

    for (int i = 0; i < answer.size(); i++)
        cout << answer.at(i) << '\t';
}