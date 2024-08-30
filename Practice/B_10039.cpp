#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int sum = 0;

    for (int i = 0, tmp; i < 5; i++)
    {
        cin >> tmp;

        if (tmp <= 40)
        {
            sum += 40;
        }
        else
        {
            sum += tmp;
        }
    }

    cout << sum / 5 << '\n';
}