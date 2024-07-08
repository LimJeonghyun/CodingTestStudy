#include <iostream>

using namespace std;

int fb[41];

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    fb[0] = 0;
    fb[1] = 1;
    for (int i = 2; i <= 40; i++)
    {
        fb[i] = fb[i - 1] + fb[i - 2];
    }

    int n;

    cin >> n;

    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;
        if (tmp == 0)
        {
            cout << 1 << ' ' << 0 << '\n';
        }
        else
        {
            cout << fb[tmp - 1] << ' ' << fb[tmp] << '\n';
        }
    }
}