#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
    int num[10];
    bool flag = true;

    for (int i = 1; i <= 8; i++)
    {
        cin >> num[i];

        if (num[i] != i)
        {
            flag = false;
        }
    }

    if (flag)
    {
        cout << "ascending\n";
    }
    else
    {
        flag = true;
        int idx = 1;

        for (int i = 8; i >= 1; i--)
        {
            if (num[idx] != i)
            {
                flag = false;
            }
            idx++;
        }

        if (flag)
        {
            cout << "descending\n";
        }
        else
        {
            cout << "mixed\n";
        }
    }

    return 0;
}