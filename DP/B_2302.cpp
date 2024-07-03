#include <iostream>

using namespace std;

int dp[41];
int arr[41];

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, m;
    int result = 1;

    cin >> n >> m;

    for (int i = 0, tmp; i < m; i++)
    {
        cin >> tmp;
        arr[tmp] = -1;
    }

    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 2] + dp[i - 1];
    }

    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] != -1)
        {
            count++;
        }
        else if (arr[i] == -1)
        {
            result *= dp[count];
            count = 0;
        }
    }
    if (count != 0)
    {
        result *= dp[count];
    }

    cout << result << '\n';
}