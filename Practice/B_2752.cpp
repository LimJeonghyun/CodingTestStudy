#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    vector<int> num;

    for (int i = 0, tmp; i < 3; i++)
    {
        cin >> tmp;
        num.push_back(tmp);
    }

    sort(num.begin(), num.end());

    cout << num.at(0) << ' ' << num.at(1) << ' ' << num.at(2) << '\n';
}