#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    priority_queue<int, vector<int>, greater<int>> num;

    cin >> n;

    for (int i = 0, tmp; i < n * n; i++)
    {
        cin >> tmp;
        num.push(tmp);
        if (num.size() > n)
        {
            num.pop();
        }
    }
    cout << num.top() << '\n';
}