#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    long long n;
    long long answer = 0;

    cin >> n;

    while (n % 5)
    {
        n -= 3;
        answer++;
    }

    if (n < 0)
    {
        cout << -1;
    }
    else
    {
        cout << answer + n / 5;
    }
}
