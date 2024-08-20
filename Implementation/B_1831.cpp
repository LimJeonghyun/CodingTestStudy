#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    long long n, k;
    int course[100001];

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> course[i];
    }

    long long curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr += course[i];
        if (curr > k)
        {
            cout << i + 1 << '\n';
            return 0;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        curr += course[i];
        if (curr > k)
        {
            cout << i + 1 << '\n';
            return 0;
        }
    }
}