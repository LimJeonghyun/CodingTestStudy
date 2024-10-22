#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> numbers)
{
    int answer = 0;

    sort(numbers.begin(), numbers.end());

    int idx = 0;
    for (int i = 0; i <= 9; i++)
    {
        if (numbers.at(idx) != i)
        {
            answer += i;
        }
        else
        {
            idx++;
        }

        if (idx >= numbers.size())
        {
            idx = i;
            break;
        }
    }

    for (int i = idx + 1; i <= 9; i++)
    {
        answer += i;
    }
    return answer;
}