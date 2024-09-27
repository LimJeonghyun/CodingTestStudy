#include <iostream>

using namespace std;

int map[65][65];

void dfs(int x, int y, int size)
{
    if (size == 1)
    {
        cout << map[x][y];
        return;
    }

    bool onlyOne = true, onlyZero = true;

    for (int i = x; i < x + size; i++)
    {
        for (int j = y; j < y + size; j++)
        {
            if (map[i][j] == 0)
            {
                onlyOne = false;
            }
            if (map[i][j] == 1)
            {
                onlyZero = false;
            }
        }
    }

    if (onlyOne)
    {
        cout << 1;
        return;
    }
    if (onlyZero)
    {
        cout << 0;
        return;
    }

    cout << '(';
    dfs(x, y, size / 2);
    dfs(x, y + size / 2, size / 2);
    dfs(x + size / 2, y, size / 2);
    dfs(x + size / 2, y + size / 2, size / 2);

    cout << ')';
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int N;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;

        for (int j = 0; j < N; j++)
        {
            map[i][j] = s[j] - '0';
        }
    }

    dfs(0, 0, N);
}