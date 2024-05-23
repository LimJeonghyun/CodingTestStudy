#include <iostream>
#include <deque>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    deque<int> dq;

    cin >> n;

    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;

        if (tmp == 1)
        {
            int x;
            cin >> x;
            dq.push_front(x);
        }
        else if (tmp == 2)
        {
            int x;
            cin >> x;
            dq.push_back(x);
        }
        else if (tmp == 3)
        {
            if (dq.empty())
                cout << -1 << '\n';
            else
            {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }
        else if (tmp == 4)
        {
            if (dq.empty())
                cout << -1 << '\n';
            else
            {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        }
        else if (tmp == 5)
        {
            cout << dq.size() << '\n';
        }
        else if (tmp == 6)
        {
            if (dq.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
        else if (tmp == 7)
        {
            if (dq.empty())
                cout << -1 << '\n';
            else
                cout << dq.front() << '\n';
        }
        else if (tmp == 8)
        {
            if (dq.empty())
                cout << -1 << '\n';
            else
                cout << dq.back() << '\n';
        }
    }
}