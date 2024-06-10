#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    int result = 0;
    int arrB[101];
    int arrA[101];

    cin >> n;

    for (int i = 0, tmp, cal; i < n; i++)
    {
        cin >> tmp;
        arrA[i] = tmp * (i + 1) - result;
        result += arrA[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arrA[i] << ' ';
    }
}