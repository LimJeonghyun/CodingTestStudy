#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int T;
    int A = 0, B = 0, C = 0;

    cin >> T;

    if (T >= 300)
    {
        A = T / 300;
        T = T % 300;
    }
    if (T >= 60)
    {
        B = T / 60;
        T = T % 60;
    }
    if (T % 10)
    {
        cout << -1 << '\n';
    }
    else
    {
        C = T / 10;
        cout << A << ' ' << B << ' ' << C << '\n';
    }
}