#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int N;
    int L, P;
    int oil[1000001] = {0};

    cin >> N;

    for (int i = 0, a, b; i < N; i++)
    {
        cin >> a >> b;

        oil[a] = b;
    }

    cin >> L >> P;

    int currentFuel = P;
    int result = 0;
    priority_queue<int> pq;

    for (int i = 1; i < L; i++)
    {
        currentFuel--;

        if (oil[i])
        {
            pq.push(oil[i]);
        }

        if (!currentFuel)
        {
            if (pq.empty())
            {
                cout << -1 << '\n';
                return 0;
            }
            currentFuel += pq.top();
            pq.pop();
            result++;
        }
    }

    cout << result << '\n';
}