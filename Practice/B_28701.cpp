#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int N;
    long long sum = 0;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        sum += i;
    }

    cout << sum << '\n';

    sum *= sum;

    cout << sum << '\n';

    sum = 0;

    for (int i = 1; i <= N; i++)
    {
        sum += i * i * i;
    }

    cout << sum << '\n';
}
