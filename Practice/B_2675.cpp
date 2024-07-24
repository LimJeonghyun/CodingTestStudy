#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;

    cin >> n;

    for (int i = 0, num; i < n; i++)
    {
        string word;

        cin >> num >> word;

        for (int j = 0; j < word.length(); j++)
        {
            for (int k = 0; k < num; k++)
            {
                cout << word[j];
            }
        }
        cout << '\n';
    }
}