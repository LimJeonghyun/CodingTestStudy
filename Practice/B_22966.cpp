#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    int max = 10;
    string easy;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string word;
        int score;

        cin >> word >> score;

        if (score > max)
        {
            continue;
        }
        else if (score < max)
        {
            max = score;
            easy = word;
        }
    }

    cout << easy << '\n';
}