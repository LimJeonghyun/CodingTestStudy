#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
    int n;
    vector<pair<int, int>> v;

    cin >> n;

    for (int i = 0, s, f; i < n; i++)
    {
        cin >> s >> f;

        v.push_back({f, s});
    }

    sort(v.begin(), v.end());

    int endTime = v[0].first;
    int answer = 1;

    for (int i = 1; i < n; i++)
    {
        if (endTime <= v[i].second)
        {
            endTime = v[i].first;
            answer++;
        }
    }

    cout << answer << '\n';
    return 0;
}