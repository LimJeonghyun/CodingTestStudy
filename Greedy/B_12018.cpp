#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    vector<int> course;

    cin >>
        n >> m; // 과목 수, 마일리지

    // int course[101][101];

    for (int i = 0; i < n; i++)
    {
        vector<int> mileage;
        int competitor;
        int capacity;
        cin >> competitor >> capacity;
        for (int j = 0, tmp; j < competitor; j++)
        {
            cin >> tmp;
            mileage.push_back(tmp);
        }
        if (competitor >= capacity)
        {
            sort(mileage.begin(), mileage.end(), greater<int>());
            course.push_back(mileage.at(capacity - 1));
            mileage.erase(mileage.begin(), mileage.end());
        }
        else
            course.push_back(1);
    }

    sort(course.begin(), course.end());
    int result = 0;

    for (int i = 0; i < n; i++)
    {
        if (m >= course.at(i))
        {
            result++;
            m -= course.at(i);
        }
        // cout << course.at(i) << '\t' << m << '\n';
    }
    cout << result << '\n';
}