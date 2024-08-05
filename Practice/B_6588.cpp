#include <iostream>

using namespace std;

int arr[1000001];

void prime()
{
    arr[1] = true;
    for (int i = 2; i * i <= 1000000; i++)
    {
        for (int j = i * i; j <= 1000000; j += i)
        {
            arr[j] = true;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    prime();

    while (1)
    {
        int n;
        bool check = true;
        cin >> n;

        if (n == 0)
        {
            break;
        }

        for (int i = 2; i <= n; i++)
        {
            if (!arr[i] && !arr[n - i])
            {
                cout << n << " = " << i << " + " << n - i << "\n";
                check = false;
                break;
            }
        }

        if (check)
        {
            cout << "Goldbach's conjecture is wrong." << '\n';
        }
    }
}