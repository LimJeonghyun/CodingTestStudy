#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    vector<int> arr;

    cin >> n;

    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;
        arr.push_back(tmp);
    }

    cin >> x;

    sort(arr.begin(), arr.end());

    int start = 0;
    int end = n - 1;
    int count = 0;
    while (start < end)
    {
        if (arr[start] + arr[end] == x)
        {
            count++;
            end--;
            start++;
        }
        else if (arr[start] + arr[end] > x)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    cout << count << '\n';
}