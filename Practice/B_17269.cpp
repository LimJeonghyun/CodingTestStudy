#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int alpha[26] = {3, 2, 1, 2, 4, 3, 1, 3, 1, 1, 3, 1, 3, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};
    int n, m;
    string a, b;
    vector<vector<int>> v(1);

    cin >> n >> m >> a >> b;

    for (int i = 0, t = 0;; i++, t++)
    {
        if (i >= n && t >= m)
        {
            break;
        }
        if (i < n)
        {
            v[0].push_back(alpha[a[i] - 'A']);
        }
        if (t < m)
        {
            v[0].push_back(alpha[b[t] - 'A']);
        }
    }

    while (1)
    {
        vector<int> w;
        for (int i = 0; i < v.back().size() - 1; i++)
        {
            w.push_back((v.back()[i] + v.back()[i + 1]) % 10);
        }
        v.push_back(w);
        if (w.size() == 2)
            break;
    }

    cout << v.back()[0] * 10 + v.back()[1] << '%' << '\n';
}