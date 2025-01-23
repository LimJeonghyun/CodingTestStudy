#include <iostream>
#include <set>

using namespace std;

int main()
{
    int N, M;
    set<string> answer;

    cin >> N >> M;

    string train[N];

    for (int i = 0; i < N; i++)
    {
        train[i] = "00000000000000000000";
    }

    for (int i = 0; i < M; i++)
    {
        int command;

        cin >> command;

        if (command == 1)
        {
            int trainNum, seat;

            cin >> trainNum >> seat;

            train[trainNum - 1][seat - 1] = '1';
        }
        else if (command == 2)
        {
            int trainNum, seat;

            cin >> trainNum >> seat;

            train[trainNum - 1][seat - 1] = '0';
        }
        else if (command == 3)
        {
            int trainNum;

            cin >> trainNum;

            train[trainNum - 1][19] = '0';
            for (int i = 18; i >= 0; i--)
            {
                if (train[trainNum - 1][i] == '1')
                {
                    train[trainNum - 1][i] = '0';
                    train[trainNum - 1][i + 1] = '1';
                }
            }
        }
        else if (command == 4)
        {
            int trainNum;

            cin >> trainNum;

            train[trainNum - 1][0] = '0';
            for (int i = 1; i < 20; i++)
            {
                if (train[trainNum - 1][i] == '1')
                {
                    train[trainNum - 1][i] = '0';
                    train[trainNum - 1][i - 1] = '1';
                }
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        answer.insert(train[i]);
        // cout << train[i] << '\n';
    }

    cout << answer.size() << '\n';
}