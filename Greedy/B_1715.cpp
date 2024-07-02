#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    priority_queue<int, vector<int>, greater<int>> card;
    long long result = 0;

    cin >> n;

    if (n == 1)
    {
        cout << 0 << '\n';
        return 0;
    }

    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;
        card.push(tmp);
    }

    while (!card.empty())
    {
        int sum = 0;
        sum += card.top();
        card.pop();

        if (!card.empty())
        {
            sum += card.top();
            card.pop();
            if (!card.empty())
            {
                card.push(sum);
            }
        }
        result += sum;
    }
    cout << result << '\n';
}