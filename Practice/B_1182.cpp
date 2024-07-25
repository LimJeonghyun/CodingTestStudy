#include <iostream>

using namespace std;

int arr[21];
int n, s;
int answer = 0;

void solve(int num, int sum)
{
    if (num == n)
    {
        if (sum == s)
        {
            answer++;
        }
        return;
    }

    solve(num + 1, sum);
    solve(num + 1, sum + arr[num]);
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    cin >> n >> s;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    solve(0, 0);

    if (s == 0)
    {
        answer--;
    }
    cout << answer << '\n';
}