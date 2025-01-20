#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, X;
    int traffic[250001];
    vector<long long> answer;

    cin >> N >> X;

    for (int i = 0; i < N; i++)
    {
        cin >> traffic[i];
    }

    int start = 0, end = 0;
    int count = 0, maxTraffic = 0;

    for (end = 0; end < X; end++)
    {
        count += traffic[end];
    }

    while (start <= end)
    {
        if (end - start == X)
        {
            answer.push_back(count);
            maxTraffic = max(count, maxTraffic);
            count += traffic[end];
            end++;
            if (end > N)
            {
                break;
            }
        }
        else if (end - start > X)
        {
            count -= traffic[start];
            start++;
            if (start >= N)
            {
                break;
            }
        }
    }

    if (maxTraffic == 0)
    {
        cout << "SAD" << '\n';
    }
    else
    {
        cout << maxTraffic << '\n';
        int maxCount = 0;
        for (int i = 0; i < answer.size(); i++)
        {
            if (answer.at(i) == maxTraffic)
            {
                maxCount++;
            }
        }
        cout << maxCount << '\n';
    }
}