#include <iostream>
#include <algorithm>

using namespace std;

void abGame(string S, string T)
{
    if (S == T)
    {
        cout << 1 << '\n';
        exit(0);
    }

    if (S.length() >= T.length())
    {
        return;
    }

    if (T[T.length() - 1] == 'A')
    {
        string tmp = T;
        tmp.erase(T.length() - 1);
        abGame(S, tmp);
    }

    if (T[0] == 'B')
    {
        string tmp = T;
        tmp.erase(tmp.begin());
        reverse(tmp.begin(), tmp.end());
        abGame(S, tmp);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    string S, T;

    cin >> S >> T;

    abGame(S, T);
    cout << 0 << '\n';
}