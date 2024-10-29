#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    long long answer = 0;
    int K, P, N;

    cin >> K >> P >> N;

    answer = K;

    for (int i = 0; i < N; i++)
    {
        answer = (answer * P) % 1000000007;
    }

    cout << answer % 1000000007 << '\n';
    return 0;
}