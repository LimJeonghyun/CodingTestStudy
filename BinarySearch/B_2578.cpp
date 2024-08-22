#include <iostream>

using namespace std;

int bingo[5][5];

bool bingoCheck()
{
    int bingoCount = 0;

    for (int i = 0; i < 5; i++)
    {
        int count = 0;
        for (int j = 0; j < 5; j++)
        {
            if (bingo[i][j] == 0)
            {
                count++;
            }
        }
        if (count == 5)
        {
            bingoCount++;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        int count = 0;
        for (int j = 0; j < 5; j++)
        {
            if (bingo[j][i] == 0)
            {
                count++;
            }
        }
        if (count == 5)
        {
            bingoCount++;
        }
    }

    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (bingo[i][i] == 0)
        {
            count++;
        }
    }
    if (count == 5)
    {
        bingoCount++;
    }

    count = 0;
    for (int i = 4; i >= 0; i--)
    {
        if (bingo[i][4 - i] == 0)
        {
            count++;
        }
    }
    if (count == 5)
    {
        bingoCount++;
    }

    if (bingoCount >= 3)
    {
        return true;
    }

    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> bingo[i][j];
        }
    }

    for (int i = 0, num; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> num;
            count++;

            for (int q = 0; q < 5; q++)
            {
                for (int k = 0; k < 5; k++)
                {
                    if (bingo[q][k] == num)
                    {
                        bingo[q][k] = 0;
                    }
                }
            }

            if (bingoCheck())
            {
                cout << count << '\n';
                return 0;
            }
        }
    }
}
