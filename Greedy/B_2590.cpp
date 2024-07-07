#include <iostream>

using namespace std;
int n, l, r, **arr, **area, dp[2501], sum = 0, cnt = 0;

int main()
{
    int one, two, three, four, five, six;
    int result = 0;

    cin >> one >> two >> three >> four >> five >> six;

    result += six;

    while (one != 0 || two != 0 || three != 0 || four != 0 || five != 0)
    {
        while (five > 0)
        {
            int area = 36;

            five--;
            area -= 25;

            if (one <= area)
            {
                one = 0;
            }
            else
            {
                one -= area;
            }
            result++;
        }

        while (four > 0)
        {
            int area = 36;

            four--;
            area -= 16;

            if (two > 5)
            {
                two -= 5;
                area -= 20;
            }
            else
            {
                area -= 4 * two;
                two = 0;
            }

            if (one <= area)
            {
                one = 0;
            }
            else
            {
                one -= area;
            }
            result++;
        }

        while (three > 0)
        {
            int area = 36;

            if (three > 4)
            {
                three -= 4;
                area = 0;
            }
            else
            {
                area -= 9 * three;
                three = 0;
            }

            if (area == 27 && two > 5)
            {
                two -= 5;
                area -= 20;
            }
            else if (area == 27 && two <= 5)
            {
                area -= 4 * two;
                two = 0;
            }

            if (area == 18 && two > 3)
            {
                two -= 3;
                area -= 12;
            }
            else if (area == 18 && two <= 3)
            {
                area -= 4 * two;
                two = 0;
            }

            if (area == 9 && two >= 1)
            {
                area -= 4 * two;
                two = 0;
            }
            if (one <= area)
            {
                one = 0;
            }
            else
            {
                one -= area;
            }
            result++;
        }

        while (two > 0)
        {
            int area = 36;

            if (two > 9)
            {
                two -= 9;
                area = 0;
            }
            else
            {
                area -= 4 * two;
                two = 0;
            }
            if (one <= area)
            {
                one = 0;
            }
            else
            {
                one -= area;
            }
            result++;
        }

        while (one > 0)
        {
            if (one > 36)
            {
                one -= 36;
            }
            else
            {
                one = 0;
            }
            result++;
        }
    }

    cout << result << '\n';
}