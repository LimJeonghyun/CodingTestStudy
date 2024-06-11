#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    int score = 0;
    int bonus = 0;
    char answer;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> answer;
        if (answer == 'X')
        {
            bonus = 0;
        }
        else if (answer == 'O')
        {
            score += i + 1 + bonus;
            bonus++;
        }
    }

    cout << score << '\n';
}