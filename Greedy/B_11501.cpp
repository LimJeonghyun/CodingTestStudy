#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    int n;

    cin >> t;

    while (t--)
    {
        cin >> n;
        vector<int> stock;

        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            stock.push_back(tmp);
        }
        long long result = 0;
        int max_value = 1;

        for (int i = n - 1; i >= 0; i--)
        {
            max_value = max(max_value, stock.at(i));
            result += max_value - stock.at(i);
        }
        cout << result << '\n';
    }
}