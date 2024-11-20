#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> arr)
{
    int answer = 0;
    long long num = 1;

    for (int i = 0; i < arr.size(); i++)
    {
        num *= arr.at(i);
    }

    sort(arr.begin(), arr.end());

    for (int i = arr.at(arr.size() - 1); i <= num; i++)
    {
        bool check = false;
        for (int j = 0; j < arr.size(); j++)
        {
            if (i % arr.at(j) == 0)
            {
                answer = i;
                check = true;
            }
            else
            {
                check = false;
                break;
            }
        }
        if (check)
        {
            break;
        }
    }

    return answer;
}