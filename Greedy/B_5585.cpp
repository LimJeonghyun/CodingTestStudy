#include <iostream>

using namespace std;

int main()
{
    int money;

    cin >> money;

    int change = 1000 - money;
    int changeCount = 0;

    if (change >= 500)
    {
        changeCount += change / 500;
        change = change % 500;
    }
    if (change >= 100)
    {
        changeCount += change / 100;
        change = change % 100;
    }
    if (change >= 50)
    {
        changeCount += change / 50;
        change = change % 50;
    }
    if (change >= 10)
    {
        changeCount += change / 10;
        change = change % 10;
    }
    if (change >= 5)
    {
        changeCount += change / 5;
        change = change % 5;
    }
    if (change >= 1)
    {
        changeCount += change / 1;
    }

    cout << changeCount << '\n';
}