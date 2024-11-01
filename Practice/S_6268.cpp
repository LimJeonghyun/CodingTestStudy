#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{

    int numArr[10][8] = {
        {0, 1, 1, 1, 0, 1, 1, 1}, // 0
        {0, 0, 0, 1, 0, 0, 1, 0}, // 1
        {0, 1, 0, 1, 1, 1, 0, 1}, // 2
        {0, 1, 0, 1, 1, 0, 1, 1}, // 3
        {0, 0, 1, 1, 1, 0, 1, 0}, // 4
        {0, 1, 1, 0, 1, 0, 1, 1}, // 5
        {0, 1, 1, 0, 1, 1, 1, 1}, // 6
        {0, 1, 1, 1, 0, 0, 1, 0}, // 7
        {0, 1, 1, 1, 1, 1, 1, 1}, // 8
        {0, 1, 1, 1, 1, 0, 1, 1}, // 9
    };

    int numCnt[10] = {6, 2, 5, 5, 4, 5, 6, 4, 7, 6};
    int T;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        string a, b;

        cin >> a >> b;

        int answer = 0;

        if (a.size() != b.size())
        {
            if (a.size() > b.size())
            {
                for (int j = 0; j < a.size() - b.size(); j++)
                {
                    answer += numCnt[a[j] - '0'];
                }
                a = a.substr(a.size() - b.size(), a.size());
            }
            else
            {
                for (int j = 0; j < b.size() - a.size(); j++)
                {
                    answer += numCnt[b[j] - '0'];
                }
                b = b.substr(b.size() - a.size(), b.size());
            }
        }

        for (int j = 0; j < a.size(); j++)
        {
            if (a[j] == b[j])
            {
                continue;
            }
            for (int k = 0; k < 8; k++)
            {
                if (numArr[a[j] - '0'][k] != numArr[b[j] - '0'][k])
                {
                    answer++;
                }
            }
        }

        cout << answer << '\n';
    }

    return 0;
}