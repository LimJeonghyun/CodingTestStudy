#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve)
{
    int answer = 0;
    map<int, int> student;

    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());

    for (int i = 1; i <= n; i++)
        student[i] = 1;

    for (int i = 0; i < lost.size(); i++)
        student[lost[i]] -= 1;

    for (int i = 0; i < reserve.size(); i++)
        student[reserve[i]] += 1;

    // for (int i = 1; i <= n; i++)
    //     cout << student[i] << endl;
    // cout << endl;

    for (int i = 1; i <= n; i++)
    {
        if (!student[i])
        {
            if (i - 1 > 0 && student[i - 1] == 2)
            {
                student[i - 1] = 1;
                student[i] += 1;
            }
            else if (i < n && student[i + 1] == 2)
            {
                student[i + 1] = 1;
                student[i] += 1;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        // cout << student[i] << endl;
        if (student[i] >= 1)
            answer++;
    }

    return answer;
}

int main()
{
    vector<int> lost = {2, 4};
    vector<int> reserve = {1, 3, 5};
    int result = solution(5, lost, reserve);
    cout << result << '\n';
}