#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int t;

    cin >> t;

    if (t % 5)
    {
        cout << t / 5 + 1 << '\n';
    }
    else
    {
        cout << t / 5 << '\n';
    }
}