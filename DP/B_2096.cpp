#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    int maxDp[3] = {
        0,
    };
    int minDp[3] = {
        0,
    };

    cin >> n;

    int input1, input2, input3;

    cin >> input1 >> input2 >> input3;

    maxDp[0] = minDp[0] = input1;
    maxDp[1] = minDp[1] = input2;
    maxDp[2] = minDp[2] = input3;

    int tmp0, tmp2;
    for (int i = 1; i < n; i++)
    {

        cin >> input1 >> input2 >> input3;

        tmp0 = maxDp[0], tmp2 = maxDp[2];
        maxDp[0] = max(maxDp[0], maxDp[1]) + input1;
        maxDp[2] = max(maxDp[1], maxDp[2]) + input3;
        maxDp[1] = max(tmp0, max(maxDp[1], tmp2)) + input2;

        tmp0 = minDp[0], tmp2 = minDp[2];
        minDp[0] = min(minDp[0], minDp[1]) + input1;
        minDp[2] = min(minDp[1], minDp[2]) + input3;
        minDp[1] = min(min(tmp0, minDp[1]), tmp2) + input2;
    }

    cout << max(maxDp[0], max(maxDp[1], maxDp[2])) << '\n';
    cout << min(minDp[0], min(minDp[1], minDp[2])) << '\n';
}