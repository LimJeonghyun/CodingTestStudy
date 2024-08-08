#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int b;

    cin >> b;

    cout << b / 1.1 << '\n';
}