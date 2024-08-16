#include <iostream>
#include <string>

using namespace std;

int n;
int endFlag = 0;

bool isValid(string s)
{
    int len = s.size();
    int end = len - 1;

    for (int i = 1; i <= len / 2; i++)
    {
        string a = s.substr(end - i, i);
        string b = s.substr(end, i);
        if (!a.compare(b))
        {
            return false;
        }
        --end;
    }
    return true;
}

void dfs(int num, string s)
{
    if (endFlag)
    {
        return;
    }
    if (!isValid(s))
    {
        return;
    }
    if (num == n)
    {
        cout << s << '\n';
        endFlag = 1;
        return;
    }
    dfs(num + 1, s + '1');
    dfs(num + 1, s + '2');
    dfs(num + 1, s + '3');
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    cin >> n;

    dfs(0, "");
}