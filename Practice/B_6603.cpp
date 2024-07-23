#include <iostream>
#include <algorithm>

using namespace std;

int lotto[14];
int ans[6];
int n;

void dfs(int start, int depth)
{
    if (depth == 6)
    {
        for (int i = 0; i < 6; i++)
        {
            cout << ans[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = start; i < n; i++)
    {
        ans[depth] = lotto[i];
        dfs(i + 1, depth + 1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    while (1)
    {
        cin >> n;

        if (!n)
        {
            break;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> lotto[i];
        }
        dfs(0, 0);
        cout << '\n';
    }
}