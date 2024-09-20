#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    priority_queue<int> mx;
    priority_queue<int, vector<int>, greater<int>> mn;

    cin >> n;

    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;

        if (mx.empty())
        {
            mx.push(tmp);
        }
        else if (mx.size() == mn.size())
        {
            mx.push(tmp);
        }
        else
        {
            mn.push(tmp);
        }

        if (!mx.empty() && !mn.empty() && (mx.top() > mn.top()))
        {
            int a = mx.top();
            int b = mn.top();

            mx.pop();
            mn.pop();

            mx.push(b);
            mn.push(a);
        }

        cout << mx.top() << '\n';
    }
}