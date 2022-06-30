// dp는 규칙을 찾는 것이 중요!!!

// X값 최소연산 과정 dp식
// 2    1   /2          dp[2]=1
// 3    1   /3          dp[3]=1
// 4    2   /2 -1       dp[4]=1+dp[i/2]
// 5    3   -1 /2 -1    dp[5]=1+dp[i-1]
// 6    2   /3 -1       dp[6]=1+dp[i/3] or dp[6]=1+dp[i/2]
// 7    3   -1 /3 -1    dp[7]=1+dp[i-1]
// 8    3   /2 /2 -1    dp[8]=1+dp[i/2]
// 9    2   /3 /3       dp[9]=1+dp[i/3]
// 10   3   -1 /3 /3    dp[10]=1+dp[i-1]
// 11   4   -1  -1 /3 /3dp[11]=1+dp[i-1]

// i가 2,3 모두 나누어짐 -> 6
// i가 2,3 모두 나누어지지 않음 -> 5, 7, 11
// i가 2로만 나누어짐 -> 4, 8, 10
// i가 3으로만 나누어짐 -> 3, 9

#include <iostream>
#include <vector>

using namespace std;

vector<int> dp(1000001, 0);
int main()
{
    int N;
    cin >> N;

    dp[2] = 1;
    dp[3] = 1;
    // dp[4] = 2;

    for (int i = 4; i <= N; i++) {
        // 2, 3이랑 모두 나누어지지 않는 경우
        if (i % 2 != 0 && i % 3 != 0)
            dp[i] = dp[i - 1] + 1;

        // 2, 3이랑 모두 나누어지는 경우
        else if (i % 2 == 0 && i % 3 == 0)
            dp[i] = min(dp[i / 2] + 1, dp[i / 3] + 1);

        // 2로만 나누어지는 경우
        else if (i % 2 == 0)
            dp[i] = min(dp[i / 2] + 1, dp[i - 1] + 1);

        // 3으로만 나누어지는 경우
        else if (i % 3 == 0)
            dp[i] = min(dp[i / 3] + 1, dp[i - 1] + 1);
    }
    cout << dp[N] << endl;

    return 0;
}

