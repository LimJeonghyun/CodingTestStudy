#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, k;
    priority_queue<int> student;

    cin >> n >> k;

    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;
        student.push(tmp);
    }

    for (int i = 0; i < k - 1; i++)
    {
        student.pop();
    }
    cout << student.top() << '\n';
}