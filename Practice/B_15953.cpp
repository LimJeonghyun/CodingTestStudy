#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int t;
    int firstFestival[21] = {500, 300, 300, 200, 200, 200, 50, 50, 50, 50, 30, 30, 30, 30, 30, 10, 10, 10, 10, 10, 10};
    int secondFestival[31] = {512, 256, 256, 128, 128, 128, 128, 64, 64, 64, 64, 64, 64, 64, 64, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32};

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int first, second;
        int result = 0;

        cin >> first >> second;

        if (first <= 21 && first >= 1)
        {
            result += firstFestival[first - 1] * 10000;
        }
        if (second <= 31 && second >= 1)
        {
            result += secondFestival[second - 1] * 10000;
        }
        cout << result << '\n';
    }
}