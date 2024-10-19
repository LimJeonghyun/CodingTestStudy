#include <iostream>
#include <cmath>

using namespace std;

int A, P;
int check[240000];

void dfs(long long num)
{
    check[num]++;

    if (check[num] == 3)
    {
        return;
    }

    long long next = 0;

    while (num)
    {
        next += pow(num % 10, P);
        num /= 10;
    }

    dfs(next);
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    cin >> A >> P;

    dfs(A);

    int answer = 0;
    for (int i = 1; i < 240000; i++)
    {
        if (check[i] == 1)
        {
            answer++;
        }
    }

    cout << answer << '\n';
}