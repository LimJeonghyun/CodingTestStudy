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
    vector<int> student;

    cin >> n;

    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;
        student.push_back(tmp);
    }

    sort(student.begin(), student.end());

    cout << student.at(n - 1) - student.at(0) << '\n';
}