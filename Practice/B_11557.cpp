#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int T;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int n;
        int total = 0;
        string school = "";

        cin >> n;

        for (int j = 0, l; j < n; j++)
        {
            string s;

            cin >> s >> l;

            if (total < l)
            {
                school = s;
                total = l;
            }
        }

        cout << school << '\n';
    }
}