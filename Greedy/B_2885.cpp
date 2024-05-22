#include <iostream>

using namespace std;

int main()
{
    int k;

    cin >> k;

    long long num = 1;
    int minNum = 1;
    int way1 = 0, way2 = 0;

    for (int i = 0; i < 20; i++)
        num *= 2; // (1 ≤ K ≤ 1,000,000)

    for (int i = 20; i >= 0; i--)
    {
        if (minNum == 1 && k > num) // 큰 수인 경우
        {
            minNum = num * 2;
            way1 = i + 1;
        }
        else if (minNum == -1 && k == num) // num과 같은 경우
        {
            minNum = num;
            way1 = i;
        }
        if (k >= num)
        {
            k -= num;
            if (k == 0)
            {
                way2 = i;
                break;
            }
        }
        num /= 2;
        // cout << num << '\n';
    }
    cout << minNum << " " << way1 - way2 << '\n';
}