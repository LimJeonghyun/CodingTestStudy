#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        string s = "";
        for (int j = 1; j <= i; j++)
        {
            s += "*";
        }
        cout << s << '\n';
    }
}