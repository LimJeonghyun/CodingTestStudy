#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int A, B;

    cin >> A >> B;

    cout << B - A << ' ' << B << '\n';
}