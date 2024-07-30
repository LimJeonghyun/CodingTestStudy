#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, k;
    vector<long long> lan;

    cin >> k >> n;

    for (int i = 0, line; i < k; i++)
    {
        cin >> line;
        lan.push_back(line);
    }

    sort(lan.begin(), lan.end());

    long long low = 1;
    long long high = lan.at(k - 1);
    long long len = 0;

    while (low <= high)
    {
        long long mid = (low + high) / 2;
        long long sum = 0;

        for (int i = 0; i < k; i++)
        {
            sum += (lan.at(i) / mid);
        }

        if (sum >= n)
        {
            len = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << len << '\n';
}