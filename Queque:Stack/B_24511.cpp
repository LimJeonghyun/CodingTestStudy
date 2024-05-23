#include <iostream>
#include <deque>

using namespace std;

bool flag[100001]; // 0:queue, 1:stack

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int m;
    deque<int> dq;

    cin >> n;

    for (int i = 0, tmp; i < n; i++)
        cin >> flag[i];

    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;
        if (!flag[i])
            dq.push_back(tmp);
    }

    cin >> m;

    for (int i = 0, tmp; i < m; i++)
    {
        cin >> tmp;
        dq.push_front(tmp);
        cout << dq.back() << ' ';
        dq.pop_back();
    }
}