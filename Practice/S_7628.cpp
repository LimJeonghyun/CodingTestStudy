#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
    int N;
    int gift[101];

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> gift[i];
    }

    sort(gift, gift + N);

    int answer = 0;

    for (int i = 2; i <= gift[N - 1]; i++)
    {
        int count = 0;
        for (int j = 0; j < N; j++)
        {
            if (gift[j] % i == 0)
            {
                count++;
            }
        }
        answer = max(count, answer);
    }

    cout << answer << '\n';
    return 0;
}