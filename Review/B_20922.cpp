#include <iostream>

using namespace std;

int main()
{
    int N, K;
    int num[200001];
    int visitedNum[100001] = {
        0,
    };

    cin >> N >> K;

    for (int i = 0; i < N; i++)
    {
        cin >> num[i];
    }

    int start = 0, end = 0;
    int count = 0, maxCount = 0;

    while (start <= end)
    {
        if (visitedNum[num[end]] < K)
        {
            visitedNum[num[end]]++;
            end++;
            if (end >= N)
            {
                maxCount = max(count + 1, maxCount);
                break;
            }
            count++;
        }
        else
        {
            visitedNum[num[start]]--;
            maxCount = max(count, maxCount);
            count--;
            start++;
            if (start >= N)
            {
                break;
            }
        }
    }

    cout << maxCount << '\n';
}