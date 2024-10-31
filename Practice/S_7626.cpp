#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
    int n;
    int town[1001];
    int minDis = 10000000;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> town[i];
    }

    sort(town, town + n);

    for (int i = 1; i < n; i++)
    {
        minDis = min(minDis, town[i] - town[i - 1]);
    }

    int answer = 0;
    for (int i = 1; i < n; i++)
    {
        if (town[i] - town[i - 1] == minDis)
        {
            answer++;
        }
    }

    cout << answer << '\n';
    return 0;
}