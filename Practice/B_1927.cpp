#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    priority_queue<int, vector<int>, greater<int>> q;

    cin >> n;

    for (int i = 0, num; i < n; i++)
    {
        cin >> num;

        if (num == 0)
        {
            if (q.empty())
            {
                cout << 0 << '\n';
            }
            else
            {
                cout << q.top() << '\n';
                q.pop();
            }
        }
        else
        {
            q.push(num);
        }
    }
}