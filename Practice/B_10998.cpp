#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int a, b;

    cin >> a >> b;

    cout << a * b << '\n';
}