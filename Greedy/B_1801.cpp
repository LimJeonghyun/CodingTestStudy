#include <iostream>

using namespace std;

bool cmp(string input, int start, int last)
{
    if (start >= last)
        return true;

    int left = start;
    int right = last;
    while (left < right)
    {
        cout << input[left] << '\t' << input[right] << ' ' << right << '\n';
        if (input[left] != input[right])
        {
            left++;
            right--;
        }
        else
            return false;
    }
    cout << '\n';
    return cmp(input, start, right - 1);
}

int main()
{
    int n;

    cin >> n;

    // cout << n << '\n';
    for (int i = 0; i < n; i++)
    {
        string input = "";
        cin >> input;
        // cout << i << '\n';
        if (input.length() % 2 == 0)
        {
            cout << "NO" << '\n';
            continue;
        }
        if (cmp(input, 0, input.length() - 1))
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}