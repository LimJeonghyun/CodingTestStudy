#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    queue<int> q;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string tmp;

        cin >> tmp;

        if (tmp == "push")
        {
            int num;
            cin >> num;
            q.push(num);
        }
        else if (tmp == "pop")
        {
            if (!q.empty())
            {
                cout << q.front() << '\n';
                q.pop();
            }
            else
                cout << -1 << '\n';
        }
        else if (tmp == "size")
            cout << q.size() << '\n';
        else if (tmp == "empty")
        {
            if (q.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
        else if (tmp == "front")
        {
            if (!q.empty())
                cout << q.front() << '\n';
            else
                cout << -1 << '\n';
        }
        else if (tmp == "back")
        {
            if (!q.empty())
                cout << q.back() << '\n';
            else
                cout << -1 << '\n';
        }
    }
}