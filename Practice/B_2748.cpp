#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;

    cin >> n;

    long long fibo[100];

    fibo[0] = 0;
    fibo[1] = 1;
    fibo[2] = 1;

    for (int i = 3; i <= n; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    cout << fibo[n];
}