#include <iostream>

using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    int sequence[n + 1];

    for (int i = 0; i < n; i++)
    {
        cin >> sequence[i];
    }

    int start = 0, end = 0;
    int count = 0;
    int sum = sequence[0];
    while (start <= end && end < n)
    {
        if (sum < m)
        {
            end++;
            sum += sequence[end];
        }
        else if (sum == m)
        {
            count++;
            end++;
            sum += sequence[end];
        }
        else if (sum > m)
        {
            sum -= sequence[start];
            start++;
            if (end < start)
            {
                end = start;
                sum = sequence[start];
            }
        }
    }
    cout << count << '\n';
}
