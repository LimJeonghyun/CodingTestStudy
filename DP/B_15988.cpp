#include <iostream>

using namespace std;

long long dp[1000001];
int arr[1000001];

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    int maxN = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (maxN < arr[i])
        {
            maxN = arr[i];
        }
    }

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for (int i = 4; i <= maxN; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % 1000000009;
    }

    for (int i = 0; i < n; i++)
    {
        cout << dp[arr[i]] % 1000000009 << '\n';
    }
}