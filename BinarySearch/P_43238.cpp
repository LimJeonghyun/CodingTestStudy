#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long solution(int n, vector<int> times)
{
    long long answer = 0;

    long long left = 1;
    long long right = 1000000000;

    while (left <= right)
    {
        long long mid = (left + right) / 2;
        long long sum = 0;
        cout << mid << '\n';

        for (int i = 0; i < times.size(); i++)
        {
            sum += mid / times.at(i);
        }

        if (sum >= n)
        {
            right = mid - 1;
            answer = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    return answer;
}

int main()
{
    int n = 6;
    vector<int> v;
    v.push_back(7);
    v.push_back(10);

    int result = solution(6, v);

    cout << result << "\n";
}