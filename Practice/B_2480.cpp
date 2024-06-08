#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int dice1, dice2, dice3;
    int result = 0;

    cin >> dice1 >> dice2 >> dice3;

    if (dice1 == dice2 && dice2 == dice3)
    {
        result = 10000 + (dice2 * 1000);
    }
    else if (dice1 == dice2)
    {
        result = 1000 + (dice1 * 100);
    }
    else if (dice1 == dice3)
    {
        result = 1000 + (dice1 * 100);
    }
    else if (dice3 == dice2)
    {
        result = 1000 + (dice2 * 100);
    }
    else
    {
        result = max(dice1, max(dice2, dice3)) * 100;
    }

    cout << result << '\n';
}