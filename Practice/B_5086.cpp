#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    while (1)
    {
        int a, b;

        cin >> a >> b;

        if (a == 0 && b == 0)
        {
            break;
        }

        if (b % a == 0)
        {
            cout << "factor\n";
        }
        else if (a % b == 0)
        {
            cout << "multiple\n";
        }
        else
        {
            cout << "neither\n";
        }
    }
}