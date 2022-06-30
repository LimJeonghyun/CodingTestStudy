#include <iostream>

using namespace std;

int main()
{
    int n;
    int dp[1000] = {};
    cin >> n;

    // 2X1 => 1
    // 2X2 => 2

    dp[1]=1;
    dp[2]=2;
    
    for (int i=3; i<=n; i++)
    {
        dp[i] = (dp[i-1] + dp[i-2]) % 10007;
        
    }
    
    cout << dp[n] << endl;
    
    
}