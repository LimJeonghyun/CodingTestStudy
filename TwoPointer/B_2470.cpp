#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    vector<long long> solution;
    long long solution1, solution2;

    cin >> n;

    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;
        solution.push_back(tmp);
    }

    sort(solution.begin(), solution.end());

    int start = 0;
    int end = n - 1;
    int minValue = abs(solution[start] + solution[end]);
    solution1 = solution[start];
    solution2 = solution[end];

    while (start < end)
    {
        int sum = solution[start] + solution[end];

        if (abs(sum) < minValue)
        {
            minValue = abs(sum);
            solution1 = solution[start];
            solution2 = solution[end];

            if (sum == 0)
                break;
        }
        if (sum < 0)
            start++;
        else
            end--;
    }
    cout << solution1 << ' ' << solution2 << '\n';
}