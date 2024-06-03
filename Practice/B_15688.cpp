#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    priority_queue<int, vector<int>, greater<int>> q;

    cin >> n;

    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;
        q.push(tmp);
    }

    for (int i = 0; i < n; i++)
    {
        cout << q.top() << '\n';
        q.pop();
    }
}