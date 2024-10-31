#include <iostream>

using namespace std;

int main()
{
    int n;
    int doll[3001];
    int dp[3001];

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> doll[i];
        dp[i] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (doll[i] < doll[j] && dp[j] <= dp[i])
            {
                dp[j] = dp[i] + 1;
            }
        }
    }

    int answer = 0;

    for (int i = 1; i <= n; i++)
    {
        answer = max(answer, dp[i]);
    }

    cout << answer << '\n';
}