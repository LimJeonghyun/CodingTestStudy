#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, m, l;
    vector<int> rest_area;

    cin >> n >> m >> l;

    rest_area.push_back(0);
    rest_area.push_back(l);

    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;

        rest_area.push_back(tmp);
    }

    sort(rest_area.begin(), rest_area.end());

    int left = 1;
    int right = l;
    int result = 0;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        int count = 0;

        // cout << mid << '\n';

        for (int i = 1; i < rest_area.size(); i++)
        {
            int dist = rest_area.at(i) - rest_area.at(i - 1);
            count += dist / mid;
            if (dist % mid == 0) // 마지막 휴게소와 겹쳤다는 뜻
            {
                count--;
            }
        }

        if (count <= m)
        {
            result = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    cout << result << '\n';
}