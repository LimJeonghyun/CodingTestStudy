#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    long long n, m;

    cin >> n >> m;

    cout << abs(n - m) << '\n';

}