#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    int result = 0;
    vector<int> tree;

    cin >> n;

    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;
        tree.push_back(tmp);
    }

    sort(tree.begin(), tree.end(), greater<int>());

    for (int i = 0; i < n; i++)
    {
        result = max(result, tree.at(i) + i + 1);
    }
    cout << result + 1 << '\n';
}