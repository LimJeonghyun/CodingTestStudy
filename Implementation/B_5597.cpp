#include <iostream>

using namespace std;

int student[31];

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    for (int i = 0; i < 28; i++)
    {
        int n;

        cin >> n;
        student[n] = 1;
    }

    for (int i = 0; i < 30; i++)
    {
        if (!student[i + 1])
        {
            cout << i + 1 << '\n';
        }
    }
}