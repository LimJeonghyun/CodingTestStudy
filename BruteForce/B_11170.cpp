#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, m, result = 0;

        cin >> n >> m;

        for (int j = n; j <= m; j++)
        {
            string num = to_string(j);

            for (int k = 0; k < num.size(); k++)
            {
                if (num[k] == '0')
                {
                    result++;
                }
            }
        }

        cout << result << '\n';
    }
}