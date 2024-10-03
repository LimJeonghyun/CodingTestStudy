#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int g;

    cin >> g;

    int start = 1;
    int end = 1;
    vector<int> answer;

    while (end <= g)
    {
        long long remember = pow(start, 2);
        long long current = pow(end, 2);

        if (current - remember == g)
        {
            answer.push_back(end);
            start++;
        }
        if (current - remember < g)
        {
            end++;
        }
        if (current - remember > g)
        {
            start++;
        }
    }

    if (answer.size() <= 0)
    {
        cout << -1 << '\n';
    }
    else
    {
        for (int i = 0; i < answer.size(); i++)
        {
            cout << answer.at(i) << '\n';
        }
    }
}