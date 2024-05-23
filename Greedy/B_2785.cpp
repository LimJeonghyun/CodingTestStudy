#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    vector<int> chain;

    cin >> n;

    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;
        chain.push_back(tmp);
    }

    sort(chain.begin(), chain.end());

    int count = 0;
    while (1)
    {
        if (chain.size() == 1)
            break;
        chain.at(0) -= 1;
        int tmp = chain.back();
        chain.pop_back();
        chain.back() += tmp;
        count++;

        if (!chain.at(0))
        {
            for (int i = 0; i < chain.size() - 1; i++)
                chain.at(i) = chain.at(i + 1);
            chain.pop_back();
        }
    }

    cout << count << '\n';
}