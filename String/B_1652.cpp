#include <iostream>

using namespace std;

char map[101][101];

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
            map[i][j] = s[j];
        }
    }

    int garo = 0, sero = 0;
    for (int i = 0; i < N; i++)
    {
        int countG = 0;
        for (int j = 0; j < N; j++)
        {
            if (map[i][j] == '.')
            {
                countG++;
            }
            else if (map[i][j] == 'X')
            {
                if (countG >= 2)
                {
                    garo++;
                }
                countG = 0;
            }
        }
        if (countG >= 2)
        {
            garo++;
        }
    }

    for (int i = 0; i < N; i++)
    {
        int countS = 0;
        for (int j = 0; j < N; j++)
        {
            if (map[j][i] == '.')
            {
                countS++;
            }
            else if (map[j][i] == 'X')
            {
                if (countS >= 2)
                {
                    sero++;
                }
                countS = 0;
            }
        }
        if (countS >= 2)
        {
            sero++;
        }
    }

    cout << garo << ' ' << sero << '\n';
}