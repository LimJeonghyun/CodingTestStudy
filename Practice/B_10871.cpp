#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, x;

    cin >> n >> x;

    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;

        if (tmp < x)
        {
            cout << tmp << ' ';
        }
    }
}