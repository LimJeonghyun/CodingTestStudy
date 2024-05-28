#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    vector<int> money;

    cin >> n >> m;

    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;
        money.push_back(tmp);
    }

    int start = 0;
    int end = m - 1;
    long long sum = 0;
    long long maxSum = 0;

    for (int i = 0; i < m; i++)
        maxSum += money.at(i);

    sum = maxSum;
    while (end < n)
    {
        start++;
        end++;
        if (end == n)
            break;
        sum += money.at(end) - money.at(start - 1);
        if (sum > maxSum)
            maxSum = sum;
    }
    cout << maxSum << '\n';
}