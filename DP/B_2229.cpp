#include <iostream>

using namespace std;

int student[1001];
int dp[1001];

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> student[i];
    }

    for (int i = 2; i <= n; i++)
    {
        int maxS = student[i], minS = student[i];
        for (int j = i - 1; j >= 0; j--)
        {
            maxS = max(maxS, student[j + 1]);
            minS = min(minS, student[j + 1]);
            dp[i] = max(dp[i], dp[j] + maxS - minS);
        }
    }

    cout << dp[n] << '\n';
}