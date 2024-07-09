#include <iostream>

using namespace std;

int dp[4001][4001];

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    string str1, str2;
    int result = 0;

    cin >> str1 >> str2;

    for (int i = 0; i < str2.length(); i++)
    {
        for (int j = 0; j < str1.length(); j++)
        {
            if (str2[i] == str1[j])
            {
                dp[i][j] = 1;
                if (i >= 1 && j >= 1)
                {
                    dp[i][j] += dp[i - 1][j - 1];
                }
                result = max(result, dp[i][j]);
            }
        }
    }

    cout << result << '\n';
}