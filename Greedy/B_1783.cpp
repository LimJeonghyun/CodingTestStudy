#include <iostream>

using namespace std;

int main()
{
    int n, m;
    int count = 0;

    cin >> n >> m;

    if (n == 1)
        count = 1;
    else if (n == 2)
        count = min(4, (m - 1) / 2 + 1);
    else
    {
        if (m < 7)
            count = min(4, m);
        else
            count = m - 2;
    }
    cout << count << '\n';
}