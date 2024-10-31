#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int ground[4][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> ground[i][j];
        }
    }

    int answer = 3;
    for (int i = 0; i < 3; i++)
    {
        int minH = 3, maxH = 0;
        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            minH = min(minH, ground[i][j]);
            maxH = max(maxH, ground[i][j]);
        }
        if (minH == maxH)
        {
            count = 0;
        }
        else
        {
            count = maxH - minH;
        }
        answer = min(count, answer);
    }

    for (int i = 0; i < 3; i++)
    {
        int minH = 3, maxH = 0;
        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            minH = min(minH, ground[j][i]);
            maxH = max(maxH, ground[j][i]);
        }

        if (minH == maxH)
        {
            count = 0;
        }
        else
        {
            count = maxH - minH;
        }
        answer = min(count, answer);
    }

    cout << answer << '\n';

    return 0;
}