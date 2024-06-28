#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool tmp(int a, int b)
{
    return abs(a) < abs(b);
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    long long result = 0;
    vector<int> score;

    cin >> n;

    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;
        score.push_back(tmp);
    }

    sort(score.begin(), score.end(), tmp);

    long long tmp;
    int minus = 0;
    int plus = -1;
    int zero = 0;
    while (1)
    {
        if (!score.size())
        {
            break;
        }
        tmp = score.back();
        score.pop_back();

        if (tmp < 0)
        {
            if (minus != 0)
            {
                result += tmp * minus;
                minus = 0;
            }
            else
            {
                minus = tmp;
            }
        }
        else if (tmp > 1)
        {
            if (plus > 0)
            {
                result += tmp * plus;
                plus = -1;
            }
            else if (plus < 0)
            {
                plus = tmp;
            }
        }
        else if (tmp == 1)
        {
            result += tmp;
        }
        else if (tmp == 0)
        {
            if (minus != 0)
            {
                result += minus * tmp;
                minus = 0;
            }
        }
    }

    if (plus > 0)
    {
        result += plus;
    }
    if (minus != 0)
    {
        result += minus;
    }
    cout << result << '\n';
}