#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, c;
    vector<long long> house;

    cin >> n >> c;

    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;
        house.push_back(tmp);
    }

    sort(house.begin(), house.end());

    long long left = 0;
    long long right = house.at(n - 1) - house.at(0);
    int result = 0;

    while (left <= right)
    {
        long long mid = (left + right) / 2;
        long long curr_pos = house.at(0);
        int count = 1;

        for (int i = 1; i < n; i++)
        {
            if (mid <= house.at(i) - curr_pos)
            {
                count++;
                curr_pos = house.at(i);
            }
        }

        if (count >= c)
        {
            left = mid + 1;
            result = mid;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << result << '\n';
}
