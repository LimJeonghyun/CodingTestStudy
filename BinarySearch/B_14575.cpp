#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, t;
    long long total_min = 0, total_max = 0;
    vector<pair<long long, long long>> student;

    cin >> n >> t;

    for (int i = 0, l, r; i < n; i++)
    {
        cin >> l >> r;

        student.push_back({l, r});
        total_min += l;
        total_max += r;
    }

    if (total_min > t || total_max < t)
    {
        cout << -1 << '\n';
        return 0;
    }

    long long left = 1;
    long long right = 1000000000000;
    long long result = 0;

    while (left <= right)
    {
        long long mid = (left + right) / 2;
        long long sum = 0;
        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            if (mid < student.at(i).first)
            {
                flag = true;
                break;
            }
            if (mid >= student.at(i).first && mid <= student.at(i).second)
            {
                sum += mid;
            }
            else if (mid > student.at(i).second)
            {
                sum += student.at(i).second;
            }
        }
        if (flag)
        {
            left = mid + 1;
            continue;
        }

        if (sum >= t)
        {
            right = mid - 1;
            result = mid;
        }
        else
        {
            left = mid + 1;
        }
    }

    cout << result << '\n';
}