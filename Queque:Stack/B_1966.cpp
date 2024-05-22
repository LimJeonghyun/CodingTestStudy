#include <iostream>
#include <queue>

using namespace std;

struct cmp
{
    bool operator()(pair<int, int> a, pair<int, int> b)
    {

        return a.second > b.second;
    }
};

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num, m;
        priority_queue<int> pq;
        queue<pair<int, int>> order;
        int count = 0;

        cin >> num >> m;
        for (int j = 0; j < num; j++)
        {
            int tmp;
            cin >> tmp;
            order.push(make_pair(j, tmp));
            pq.push(tmp);
        }
        while (!order.empty())
        {
            int index = order.front().first;
            int priority = order.front().second;
            order.pop();

            if (pq.top() == priority)
            {
                pq.pop();
                count++;
                if (m == index)
                {
                    cout << count << '\n';
                    break;
                }
            }
            else
                order.push({index, priority});
        }
    }
}