#include <iostream>

using namespace std;

// 생각한 식은 맞음!
// 2에서 카운트를 잘못했을 뿐!
// 도형 잘 그리고 여러 케이스 생각해보기

int main()
{
	int n;
	int dp[1000] = {};
	cin >> n;
	dp[0] = 1;
	dp[1] = 1;

	for (int i = 2; i <= n; i++)
	{
		dp[i] = (dp[i - 1] + dp[i - 2]*2) % 10007;

	}

	cout << dp[n] % 10007;


}