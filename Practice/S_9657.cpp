#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int n, m;
    int map[101][101];

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> map[i][j];
        }
    }

    for (int i = 0, l, r; i < 2; i++)
    {
        cin >> l >> r;

        int attack[101];

        for (int j = 0; j < 101; j++)
        {
            attack[j] = 0;
        }
        for (int j = l - 1; j < r; j++)
        {
            attack[j] = 1;
        }

        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                if (attack[j] == 1 && map[j][k] == 1)
                {
                    attack[j] = 0;
                    map[j][k] = 0;
                }
            }
        }
    }

    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (map[i][j] == 1)
            {
                answer++;
            }
        }
    }

    cout << answer << '\n';
    return 0;
}