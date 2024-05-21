#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <deque>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights)
{
    int answer = 0;
    queue<int> waitingTruck;
    deque<pair<int, int>> onBridgeTruck;

    int currentWeight = 0;

    for (int i = 0; i < truck_weights.size(); i++)
        waitingTruck.push(truck_weights.at(i));

    while (!onBridgeTruck.empty() || !waitingTruck.empty())
    {
        answer++;

        if (!onBridgeTruck.empty() && onBridgeTruck.front().second == bridge_length)
        {
            currentWeight -= onBridgeTruck.front().first;
            onBridgeTruck.pop_front();
        }

        if (currentWeight + waitingTruck.front() <= weight && !waitingTruck.empty())
        {
            onBridgeTruck.push_back({waitingTruck.front(), 0});
            currentWeight += waitingTruck.front();
            waitingTruck.pop();
        }
        for (int i = 0; i < onBridgeTruck.size(); i++)
            onBridgeTruck[i].second++;
    }

    return answer;
}

int main()
{
    int len = 2;
    int weight = 10;
    vector<int> truck_weights = {7, 4, 5, 6};

    int answer = solution(len, weight, truck_weights);

    cout << answer << '\n';
}