#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int num;
    int result = 0;

    cin >> num;

    vector<bool> v(num + 1, 1);
    for (int i = 2; i * i <= num; i++)
    {
        if (v[i] == 0)
        {
            continue;
        }
        for (int j = i + i; j <= num; j += i)
        {
            v[j] = 0;
        }
    }

    vector<int> prime;
    for (int i = 2; i <= num; i++)
    {
        if (v[i])
        {
            prime.push_back(i);
        }
    }

    int start = 0, end = 0;
    int sum = 0;

    while (1)
    {
        if (sum > num)
        {
            sum -= prime[start];
            start++;
        }
        else if (sum < num)
        {
            if (end >= prime.size())
            {
                break;
            }
            sum += prime[end];
            end++;
        }
        else
        {
            result++;
            if (end >= prime.size())
            {
                break;
            }
            sum += prime[end];
            end++;
        }
    }

    cout << result << '\n';
}