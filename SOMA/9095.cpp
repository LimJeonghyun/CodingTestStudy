// dp문제는 규칙을 찾아야하므로 케이스를 생각할 때 신중하게 생각할 것!

// dp[1] = 1
// dp[2] = 1+1 , 2
// dp[3] = 1+1+1, 2+1, 2+1, 3
// dp[4] = 1+1+1+1, 2+2, 2+1+1, 1+2+1, 1+1+2, 3+1, 1+3

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int num;
    int dp[12];

    dp[1]=1;
    dp[2]=2;
    dp[3]=4;
    for(int i=0; i<n; i++){
        cin >> num;
        for(int j=4; j<=num; j++){
            dp[j]=dp[j-1]+dp[j-2]+dp[j-3];
        }
        cout << dp[num] << "\n";
    }
    return 0;
}