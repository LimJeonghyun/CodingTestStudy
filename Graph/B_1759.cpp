#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int L, C;
char alpha[16];
vector<char> password;

bool validation()
{
    int vowel = 0;

    for (int i = 0; i < password.size(); i++)
    {
        if (password.at(i) == 'a' || password.at(i) == 'e' || password.at(i) == 'i' || password.at(i) == 'o' || password.at(i) == 'u')
        {
            vowel++;
        }
    }
    if (vowel >= 1 && L - vowel >= 2)
    {
        return true;
    }
    return false;
}

void dfs(int index)
{
    if (password.size() == L)
    {
        if (validation())
        {
            for (int i = 0; i < L; i++)
            {
                cout << password.at(i);
            }
            cout << '\n';
        }
        return;
    }

    for (int i = index; i < C; i++)
    {
        password.push_back(alpha[i]);
        dfs(i + 1);
        password.pop_back();
    }
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    cin >> L >> C;

    for (int i = 0; i < C; i++)
    {
        cin >> alpha[i];
    }

    sort(alpha, alpha + C);

    dfs(0);
}