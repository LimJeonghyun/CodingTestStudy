#include <iostream>

using namespace std;

int main()
{
    int n;
    int dp[16];

    cin >> n;

    dp[0] = 2;
    dp[1] = 3;

    int addNum = 1;

    for (int i = 2; i <= n; i++)
    {
        addNum *= 2;
        dp[i] = dp[i - 1] + addNum;
    }

    cout << dp[n] * dp[n];
}