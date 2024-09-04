#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    while (1)
    {
        int boy, girl;

        cin >> boy >> girl;

        if (boy == 0 && girl == 0)
        {
            break;
        }

        cout << boy + girl << '\n';
    }
}