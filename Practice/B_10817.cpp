#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int a, b, c;
    vector<int> v;

    cin >> a >> b >> c;

    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    sort(v.begin(), v.end());

    cout << v.at(1) << '\n';
}