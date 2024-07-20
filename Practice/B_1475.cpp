#include <iostream>

using namespace std;

int numSet[10];

void reset()
{
    for (int i = 0; i < 9; i++)
    {
        numSet[i] = 0;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    string num;
    int result = 1;

    cin >> num;

    for (int i = 0; i < num.length(); i++)
    {
        if (num[i] == '6' || num[i] == '9')
        {
            if (numSet[6] == numSet[9])
            {
                numSet[9]++;
            }
            else
            {
                numSet[6]++;
            }
        }
        else
        {
            numSet[num[i] - '0']++;
        }
    }

    result = numSet[0];

    for (int i = 1; i < 10; i++)
    {
        if (result < numSet[i])
        {
            result = numSet[i];
        }
    }

    cout << result << '\n';
}