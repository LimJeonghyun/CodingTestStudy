
#include <iostream>

using namespace std;

int map[2200][2200];
int onlyMinusOne = 0, onlyZero = 0, onlyOne = 0;

void countPaper(int x, int y, int N)
{
    bool check = true;
    for (int i = x; i < x + N; i++)
    {
        for (int j = y; j < y + N; j++)
        {
            if (map[x][y] != map[i][j])
            {
                check = false;
                break;
            }
        }
        if (!check)
        {
            break;
        }
    }

    if (!check)
    {
        countPaper(x, y, N / 3);
        countPaper(x + N / 3, y, N / 3);
        countPaper(x + N / 3 + N / 3, y, N / 3);
        countPaper(x, y + N / 3, N / 3);
        countPaper(x, y + N / 3 + N / 3, N / 3);
        countPaper(x + N / 3, y + N / 3, N / 3);
        countPaper(x + N / 3 + N / 3, y + N / 3 + N / 3, N / 3);
        countPaper(x + N / 3, y + N / 3 + N / 3, N / 3);
        countPaper(x + N / 3 + N / 3, y + N / 3, N / 3);
    }
    else
    {
        if (map[x][y] == 0)
        {
            onlyZero++;
        }
        else if (map[x][y] == -1)
        {
            onlyMinusOne++;
        }
        else if (map[x][y] == 1)
        {
            onlyOne++;
        }
    }
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
        for (int j = 0; j < N; j++)
        {
            cin >> map[i][j];
        }
    }

    countPaper(0, 0, N);

    cout << onlyMinusOne << '\n';
    cout << onlyZero << '\n';
    cout << onlyOne << '\n';
}