#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int score = 0;

    for (int i = 0, mushroom; i < 10; i++)
    {
        cin >> mushroom;

        score += mushroom;

        if (score == 100)
        {
            cout << score << '\n';
            return 0;
        }
        if (score > 100)
        {
            if (abs(100 - (score - mushroom)) == abs(100 - score))
            {
                cout << score << '\n';
            }
            else if (abs(100 - (score - mushroom)) < abs(100 - score))
            {
                cout << score - mushroom << '\n';
            }
            else if (abs(100 - (score - mushroom)) > abs(100 - score))
            {
                cout << score << '\n';
            }
            return 0;
        }
    }
    cout << score << '\n';
}