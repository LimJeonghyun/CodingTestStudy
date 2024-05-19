#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    vector<int> student;
    int result;

    cin >> n;

    for (int i = 0, tmp; i < n * 2; i++)
    {
        cin >> tmp;
        student.push_back(tmp);
    }

    sort(student.begin(), student.end());

    result = student[0] + student[2 * n - 1];
    for (int i = 1; i < n; i++)
        result = min(result, student[i] + student[2 * n - 1 - i]);
    cout << result << '\n';
}