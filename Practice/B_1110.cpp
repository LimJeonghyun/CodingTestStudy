#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    int num;
    int count = 0;

    cin >> n;

    num = n;

    while (1)
    {
        num = (num % 10) * 10 + ((num / 10) + (num % 10)) % 10;

        count++;
        if (n == num)
            break;
    }

    cout << count << '\n';
}