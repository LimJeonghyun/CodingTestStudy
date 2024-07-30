#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    long long m;
    vector<int> budget;

    cin >> n;

    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;
        budget.push_back(tmp);
    }

    cin >> m;

    sort(budget.begin(), budget.end());
    long long left = 1;
    long long right = budget.at(n - 1);
    long long money = 0;

    while (left <= right)
    {
        long long mid = (left + right) / 2;
        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            if (mid > budget.at(i))
            {
                sum += budget.at(i);
            }
            else
            {
                sum += mid;
            }
        }

        if (sum <= m)
        {
            money = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << money << '\n';
}