#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n)
{
    int answer = 0;
    vector<int> v;

    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }

    int end = 0, start = 0;
    int sum = v.at(start);

    while (start <= end)
    {
        if (sum == n)
        {
            answer++;
            end++;
            if (end >= n)
            {
                break;
            }
            sum += v.at(end);
        }
        else if (sum < n)
        {
            end++;
            if (end >= n)
            {
                break;
            }
            sum += v.at(end);
        }
        else if (sum > n)
        {
            sum -= v.at(start);
            start++;
            if (start >= n)
            {
                break;
            }
        }
    }

    return answer;
}