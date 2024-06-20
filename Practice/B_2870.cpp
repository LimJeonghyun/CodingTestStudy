#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool cmp(string a, string b)
{
    if (a.length() == b.length())
    {
        return a < b;
    }
    return a.length() < b.length();
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    string word;
    vector<string> homework;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> word;

        string find = "";

        for (int j = 0; j < word.length(); j++)
        {
            if (word[j] >= '0' && word[j] <= '9')
            {
                if (word[j] == '0' && find == "" && (word[j + 1] >= '0' && word[j + 1] <= '9'))
                {
                    continue;
                }
                find += word[j];
            }
            else
            {
                if (find != "")
                {
                    homework.push_back(find);
                }
                find = "";
            }
        }
        if (find != "")
        {
            homework.push_back(find);
        }
    }

    sort(homework.begin(), homework.end(), cmp);

    for (int i = 0; i < homework.size(); i++)
    {
        cout << homework.at(i) << '\n';
    }
}