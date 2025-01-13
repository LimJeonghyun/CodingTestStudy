#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int X, N;
    int blogTotal[250001];
    vector<long long> visitTotal;

    cin >> X >> N;

    for (int i = 0; i < X; i++)
    {
        cin >> blogTotal[i];
    }

    int start = 0, end = 0, count = 0;
    long long maxNum = 0, blog = 0;

    for (end = start; end < N; ++end)
    {
        blog += blogTotal[end];
    }

    while (start <= end)
    {
        if (end - start == N)
        {
            // cout << blog << '\n';
            maxNum = max(maxNum, blog);
            visitTotal.push_back(blog);
            blog += blogTotal[end];
            end++;
            if (end > X)
            {
                break;
            }
            // cout << ": " << blogTotal[end] << '\n';
        }
        if (end - start > N)
        {
            blog -= blogTotal[start];
            // cout << "* " << blog << '\n';
            start++;
            if (end - start < N)
            {
                break;
            }
        }
    }

    if (maxNum == 0)
    {
        cout << "SAD" << '\n';
    }
    else
    {
        cout << maxNum << '\n';

        for (int i = 0; i < visitTotal.size(); i++)
        {
            // cout << visitTotal.at(i) << '\n';
            if (visitTotal.at(i) == maxNum)
            {
                count++;
            }
        }

        cout << count << '\n';
    }
}