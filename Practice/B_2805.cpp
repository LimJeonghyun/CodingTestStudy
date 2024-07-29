#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, m;
    vector<int> tree;

    cin >> n >> m;

    for (int i = 0, tHeight; i < n; i++)
    {
        cin >> tHeight;
        tree.push_back(tHeight);
    }

    sort(tree.begin(), tree.end());

    long long low = 0;
    long long high = tree.at(n - 1);
    int maxHeight = 0;

    while (low <= high)
    {
        long long mid = (low + high) / 2;
        long long treeCut = 0;

        for (int i = 0; i < n; i++)
        {
            if (tree.at(i) - mid > 0)
            {
                treeCut += tree.at(i) - mid;
            }
        }

        if (treeCut >= m)
        {
            maxHeight = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << maxHeight << '\n';
}