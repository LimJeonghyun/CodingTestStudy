#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
    vector<int> answer;
    queue<int> q;

    for (int i = 0; i < progresses.size(); i++)
        q.push(i);

    int count = 0;
    while (!q.empty())
    {
        for (int i = 0; i < progresses.size(); i++)
            progresses[i] += speeds[i];
        int count = 0;
        while (!q.empty() && progresses[q.front()] >= 100)
        {
            count++;
            q.pop();
        }
        if (count)
            answer.push_back(count);
    }

    return answer;
}

int main()
{
    vector<int> progress = {93, 30, 55};
    vector<int> speed = {1, 30, 5};

    vector<int> answer = solution(progress, speed);

    for (int i = 0; i < answer.size(); i++)
        cout << answer.at(i) << '\t';
}