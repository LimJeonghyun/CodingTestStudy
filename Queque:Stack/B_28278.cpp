#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    stack<int> s;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;

        if (tmp == 1)
        {
            int num;
            cin >> num;
            s.push(num);
        }
        else if (tmp == 2)
        {
            if (!s.empty())
            {
                cout << s.top() << '\n';
                s.pop();
            }
            else
                cout << -1 << '\n';
        }
        else if (tmp == 3)
        {
            cout << s.size() << '\n';
        }
        else if (tmp == 4)
        {
            if (s.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
        else if (tmp == 5)
        {
            if (!s.empty())
                cout << s.top() << '\n';

            else
                cout << -1 << '\n';
        }
    }
}