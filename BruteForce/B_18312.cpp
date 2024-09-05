#include <iostream>

using namespace std;

int n, k;

bool flag(int num)
{
    if (num % 10 == k || num / 10 == k)
    {
        return true;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    cin >> n >> k;

    int result = 0;

    for (int h = 0; h <= n; h++)
    {
        for (int m = 0; m < 60; m++)
        {
            for (int s = 0; s < 60; s++)
            {
                if (flag(h) || flag(m) || flag(s))
                {
                    result++;
                }
            }
        }
    }

    cout << result << '\n';
}