#include <iostream>
#include <vector>

using namespace std;

int prime[2000001];
vector<int> v;

void primeNumber()
{
    prime[1] = 1;

    for (long long i = 2; i <= 2000000; i++)
    {
        if (prime[i])
        {
            continue;
        }
        for (long long j = i * i; j <= 2000000; j += i)
        {
            prime[j] = 1;
        }
    }

    for (int i = 2; i <= 2000000; i++)
    {
        if (!prime[i])
        {
            v.push_back(i);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int T;

    cin >> T;

    primeNumber();

    for (int i = 0; i < T; i++)
    {
        long long A, B;

        cin >> A >> B;

        long long AB = A + B;
        int flag = 0;

        if (AB == 2 || AB == 3)
        {
            cout << "NO\n";
        }
        else if (A % 2 == 0 && B % 2 == 0)
        {
            cout << "YES\n";
        }
        else if (A % 2 && B % 2)
        {
            cout << "YES\n";
        }

        else
        {
            AB -= 2;

            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] * v[i] > AB)
                {
                    break;
                }
                if (AB % v[i] == 0)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }
}
