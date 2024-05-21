#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location)
{
    int answer = 0;
    queue<pair<int, int>> order;
    priority_queue<pair<int, int>> pq;

    for (int i = 0; i < priorities.size(); i++)
    {
        order.push({priorities.at(i), i});
        pq.push({priorities.at(i), i});
    }

    while (1)
    {
        pair<int, int> max = pq.top();
        pair<int, int> top = order.front();

        order.pop();

        if (max.first == top.first)
        {
            pq.pop();
            answer++;

            if (location == top.second)
                break;
        }
        order.push(top);
    }

    return answer;
}

int main()
{
    vector<int> priorities = {2, 1, 3, 2};
    int location = 2;

    int answer = solution(priorities, location);

    cout << answer << '\n';
}