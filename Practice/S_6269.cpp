#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int m, n, k;
    int secret[101];
    int button[101];

    cin >> m >> n >> k;

    for (int i = 0; i < m; i++)
    {
        cin >> secret[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> button[i];
    }

    for (int i = 0; i < n; i++)
    {
        bool check = false;
        for (int j = 0; j < m; j++)
        {
            if (i + j >= n)
            {
                check = false;
                break;
            }
            if (button[i + j] == secret[j])
            {
                check = true;
            }
            else
            {
                check = false;
                break;
            }
        }
        if (check)
        {
            cout << "secret";
            return 0;
        }
    }
    cout << "normal";
    return 0;
}