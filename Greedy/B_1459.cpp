#include <iostream>

using namespace std;

int main()
{
    long long x, y, w, s;

    cin >> x >> y >> w >> s;

    long long costA = (x + y) * w;
    long long costB = min(x, y) * s;

    costB += min(abs(x - y) * w, (abs(x - y) % 2 == 1 ? (abs(x - y) - 1) * s + w : abs(x - y) * s));

    cout << min(costA, costB) << '\n';
}