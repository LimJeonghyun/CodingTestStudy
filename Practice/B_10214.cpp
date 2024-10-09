#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int T;
    int y = 0, k = 0;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            int a, b;

            cin >> a >> b;

            y += a;
            k += b;
        }

        if (y > k)
        {
            cout << "Yonsei" << '\n';
        }
        else if (y < k)
        {
            cout << "Korea" << '\n';
        }
        else
        {
            cout << "Draw" << '\n';
        }
    }
}