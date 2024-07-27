#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    string name, state;
    unordered_map<string, int> office;
    vector<string> worker;

    cin >>
        n;

    for (int i = 0; i < n; i++)
    {
        cin >> name >> state;
        if (state == "enter")
        {
            office[name] = 1;
        }
        else if (state == "leave")
        {
            office[name] = 0;
        }
    }

    for (auto iter = office.begin(); iter != office.end(); iter++)
    {
        if (iter->second)
        {
            worker.push_back(iter->first);
        }
    }

    sort(worker.begin(), worker.end(), greater<string>());

    for (int i = 0; i < worker.size(); i++)
    {
        cout << worker.at(i) << '\n';
    }
}