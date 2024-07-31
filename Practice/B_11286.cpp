#include <iostream>
#include <queue>

using namespace std;

struct cmp
{
    bool operator()(int a, int b)
    {
        if (abs(a) == abs(b))
        {
            return a > b;
        }
        return abs(a) > abs(b);
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    priority_queue<int, vector<int>, cmp> q;

    cin >> n;

    for (int i = 0, cmd; i < n; i++)
    {
        cin >> cmd;

        if (cmd)
        {
            q.push(cmd);
        }
        else
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
    }
}