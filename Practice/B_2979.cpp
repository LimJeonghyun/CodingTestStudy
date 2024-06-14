#include <iostream>
#include <queue>

using namespace std;

int truck[101];

int main()
{
    int time[3];
    int maxTime = 0;

    cin >> time[0] >> time[1] >> time[2];

    for (int i = 0, a, b; i < 3; i++)
    {
        cin >> a >> b;
        maxTime = max(maxTime, b);
        for (int j = a; j < b; j++)
        {
            truck[j] += 1;
        }
    }

    int sum = 0;

    for (int i = 0; i <= maxTime; i++)
    {
        if (truck[i] > 0)
        {
            sum += truck[i] * time[truck[i] - 1];
        }
    }

    cout << sum << '\n';
}