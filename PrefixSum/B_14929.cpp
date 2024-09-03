#include <iostream>

using namespace std;

long long num[100001];
long long sum[100001];

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    long long result = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> num[i];
        sum[i] = sum[i - 1] + num[i];
    }

    for (int i = 2; i <= n; i++)
    {
        result += num[i] * sum[i - 1];
    }

    cout << result << '\n';
}