#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int k;
    int answer = 0;
    stack<int> money;

    cin >> k;

    for (int i = 0, tmp; i < k; i++)
    {
        cin >> tmp;
        if (!tmp && !money.empty())
            money.pop();
        else if (tmp)
            money.push(tmp);
    }

    while (!money.empty())
    {
        answer += money.top();
        money.pop();
    }

    cout << answer << '\n';
}