#include <iostream>

using namespace std;

int main()
{
    int N, K;
    int numArr[200001];
    int numCheck[100001] = {
        0,
    };

    cin >> N >> K;

    for (int i = 0; i < N; i++)
    {
        cin >> numArr[i];
    }

    int start = 0, end = 0, count = 0;
    int maxCount = 0;

    while (start <= end)
    {
        // cout << numCheck[numArr[end]] << ' ' << numArr[end] << '\n';
        if (numCheck[numArr[end]] < K)
        {
            numCheck[numArr[end]]++;
            end++;
            if (end >= N)
            {
                count++; // 맨마지막 값을 포함시켜줄것
                break;
            }
            count++;
        }
        else
        {
            // cout << "check : " << numCheck[numArr[end]] << '\n';
            numCheck[numArr[start]]--;
            count--;
            start++;
        }
        maxCount = max(maxCount, count);
    }

    cout << max(maxCount, count) << '\n';
}