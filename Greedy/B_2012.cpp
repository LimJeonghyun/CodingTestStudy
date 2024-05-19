#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    vector<int> student;
    long long result = 0;

    cin >> n;

    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;
        student.push_back(tmp);
    }

    sort(student.begin(), student.end());

    for (int i = 0; i < n; i++)
        result += abs(student[i] - (i + 1));
    cout << result << '\n';
}