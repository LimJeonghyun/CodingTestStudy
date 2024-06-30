#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    int answer = 0;
    int milk = 0;

    cin >> n;

    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;

        if (tmp == milk)
        {
            answer++;
            milk++;
            if (milk >= 3)
            {
                milk = 0;
            }
        }
    }

    cout << answer << '\n';
}