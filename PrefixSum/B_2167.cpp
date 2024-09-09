#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int arr[301][301];
    int n, m;

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int k;

    cin >> k;

    for (int i = 0; i < k; i++)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        long long sum = 0;

        for (int j = a; j <= x; j++)
        {
            for (int q = b; q <= y; q++)
            {
                sum += arr[j][q];
            }
        }

        cout << sum << '\n';
    }
    return 0;
}