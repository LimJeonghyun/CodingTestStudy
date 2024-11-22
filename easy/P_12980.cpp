#include <iostream>
using namespace std;

int solution(int n)
{
    int ans = 0;

    while (1)
    {
        if (n == 0)
        {
            break;
        }

        if (n % 2 != 0)
        {
            ans++;
        }
        n = n / 2;
    }

    return ans;
}