#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, s;
    vector<int> sequence;

    cin >> n >> s;

    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;
        sequence.push_back(tmp);
    }

    int start = 0;
    int end = 0;
    int len = n;
    int curr_len = 1;
    int sum = sequence.at(start);
    bool check = false;

    while (1)
    {
        // cout << start << ' ' << end << '\n';
        if (start >= n && end >= n)
        {
            break;
        }
        if (sum >= s)
        {
            len = min(len, curr_len);
            sum -= sequence.at(start);
            curr_len--;
            start++;
            check = true;
        }
        else if (sum < s)
        {
            end++;
            curr_len++;
            if (end <= n - 1)
            {
                sum += sequence.at(end);
            }
            else
            {
                break;
            }
        }
    }

    if (!check)
    {
        cout << 0 << '\n';
    }
    else
    {
        cout << len << '\n';
    }
}