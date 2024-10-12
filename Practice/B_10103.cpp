#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    int changyoung = 100, sangduck = 100;

    cin >> n;

    for (int i = 0, a, b; i < n; i++)
    {
        cin >> a >> b;

        if (a > b)
        {
            sangduck -= a;
        }
        else if (a < b)
        {
            changyoung -= b;
        }
    }

    cout << changyoung << '\n'
         << sangduck << '\n';
}