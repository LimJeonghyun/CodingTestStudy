#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int chicken, coke, beer;
    int result = 0;

    cin >> chicken >> coke >> beer;

    result += coke / 2;
    result += beer;

    if (result > chicken)
    {
        cout << chicken << '\n';
    }
    else
    {
        cout << result << '\n';
    }
}