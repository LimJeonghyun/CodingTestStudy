#include <iostream>
#include <string>

using namespace std;

int dp[5001];

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    string code;

    cin >> code;

    int len = code.length();
    string word = "";

    if (code[0] == '0')
    {
        cout << 0;
        return 0;
    }
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= len; i++)
    {
        if (code[i - 1] != '0')
        {
            dp[i] = dp[i - 1];
        }
        int num = stoi(code.substr(i - 2, 2));
        if (num >= 10 && num <= 26)
        {
            dp[i] = (dp[i] + dp[i - 2]) % 1000000;
        }
    }

    cout << dp[len] % 1000000 << '\n';
}