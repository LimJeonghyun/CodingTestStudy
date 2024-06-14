#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    long long n, m, result = 2000000000, tmp;
    vector<long long> num;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        num.push_back(tmp);
    }

    sort(num.begin(), num.end());

    long long start = 0;
    long long end = 0;

    while (1)
    {
        if (end >= n || start >= n)
            break;
        long long diff = abs(num.at(start) - num.at(end));
        if (diff == m)
        {
            result = m;
            break;
        }
        if (diff < m)
        {
            end++;
        }
        else if (diff > m)
        {
            start++;
            result = min(result, diff);
        }
    }
    cout << result << '\n';
}