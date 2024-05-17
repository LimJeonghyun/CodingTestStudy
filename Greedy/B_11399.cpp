#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    int cost = 0;
    int result = 0;
    vector<int> time;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        time.push_back(tmp);
    }

    sort(time.begin(), time.end());
    for (int i = 0; i < n; i++)
    {
        cost += time[i];
        result += cost;
    }
    cout << result << endl;
}