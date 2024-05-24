#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, l;
    vector<pair<int, int>> location;

    cin >> n >> l;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        location.push_back({x, y});
    }
    sort(location.begin(), location.end());

    int count = 0;
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        int start = location.at(i).first;
        int last = location.at(i).second;

        if (index >= last)
            continue;

        if (start < index)
            start = index;

        int answer = (last - start) / l;
        if ((last - start) % l)
            answer++;
        index = start + answer * l;
        count += answer;
    }

    cout << count << '\n';
}