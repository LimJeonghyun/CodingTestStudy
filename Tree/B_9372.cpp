#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int T;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N, M, a, b;

        cin >> N >> M;

        for (int j = 0; j < M; j++)
        {
            cin >> a >> b;
        }

        cout << N - 1 << '\n';
    }
}