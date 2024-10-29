#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char **argv)
{
    int W, N;
    priority_queue<pair<int, int>> pq;

    cin >> W >> N;

    for (int i = 0, m, p; i < N; i++)
    {
        cin >> m >> p;
        pq.push({p, m});
    }

    long long total = 0;
    while (!pq.empty())
    {
        int weight = pq.top().second;
        int price = pq.top().first;
        pq.pop();

        if (weight <= W)
        {
            W -= weight;
            total += price * weight;
            if (W == 0)
            {
                break;
            }
        }
        else
        {
            total += W * price;
            break;
        }
    }

    cout << total << '\n';
    return 0;
}