#include <iostream>
#include <vector>

using namespace std;

string str;
int max_num;
int len = 0;
vector<int> v;
int arr[51];

void func(int n)
{
    if (n == len)
    {
        for (int i = 0; i < max_num; i++)
        {
            cout << v.at(i) << ' ';
        }
        exit(0);
    }

    string s = "";
    int num;
    for (int i = n; i <= n + 1; i++)
    {
        s += str[i];
        num = stoi(s);

        if (num > max_num)
        {
            continue;
        }
        if (arr[num])
        {
            continue;
        }

        v.push_back(num);
        arr[num] = 1;
        func(i + 1);
        arr[num] = 0;
        v.pop_back();
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    cin >> str;

    len = str.length();

    if (str.length() <= 9)
    {
        max_num = len;
    }
    else
    {
        max_num = (len - 9) / 2 + 9;
    }

    func(0);
}