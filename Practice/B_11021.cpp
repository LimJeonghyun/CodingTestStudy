#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;

    cin >> n;

    for (int i = 0, a, b; i < n; i++)
    {
        cin >> a >> b;

        cout << "Case #" << i + 1 << ": " << a + b << '\n';
    }
}