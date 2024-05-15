#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int solution(vector<int> people, int limit)
{
    int answer = 0;

    deque<int> sorted_people;
    sort(people.begin(), people.end(), greater<int>());

    for (int i = 0; i < people.size(); i++)
        sorted_people.push_back(people[i]);

    while (!sorted_people.empty())
    {
        // cout << sorted_people.front() << "\t" << sorted_people.back() << endl;
        if (sorted_people.size() >= 2 && sorted_people.front() + sorted_people.back() <= limit)
        {
            sorted_people.pop_back();
            sorted_people.pop_front();
        }
        else
            sorted_people.pop_front();
        answer++;
    }

    return answer;
}

int main()
{
    vector<int> people = {70, 50, 80};
    int limit = 100;
    int result = solution(people, limit);

    cout << result << "\n";
}