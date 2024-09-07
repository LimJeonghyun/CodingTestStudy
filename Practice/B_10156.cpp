#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, k, m;

    cin >> n >> k >> m;

    if (n * k > m)
    {
        cout << n * k - m << '\n';
    }
    else
    {
        cout << 0 << '\n';
    }
}