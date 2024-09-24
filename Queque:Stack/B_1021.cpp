#include <iostream>
#include <deque>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int N, M;
    int result = 0;
    int left, right;
    deque<int> dq;

    cin >> N >> M;

    for (int i = 1; i <= N; i++)
    {
        dq.push_back(i);
    }

    for (int i = 0; i < M; i++)
    {
        int num;

        cin >> num;
        for (int j = 0; j < dq.size(); j++)
        {
            if (dq.at(j) == num)
            {
                left = j;
                right = dq.size() - j;
                break;
            }
        }

        if (left <= right)
        {
            while (1)
            {
                if (dq.front() == num)
                {
                    break;
                }

                dq.push_back(dq.front());
                dq.pop_front();
                result++;
            }
            dq.pop_front();
        }
        else
        {
            result++;
            while (1)
            {
                if (dq.back() == num)
                {
                    break;
                }

                dq.push_front(dq.back());
                dq.pop_back();
                result++;
            }
            dq.pop_back();
        }
    }

    cout << result << '\n';
}