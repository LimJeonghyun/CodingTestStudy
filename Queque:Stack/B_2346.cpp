#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main()
{
    int n;
    deque<pair<int, int>> balloon;
    vector<int> answer;

    cin >> n;

    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;
        balloon.push_back({tmp, i + 1});
    }

    while (1)
    {
        if (balloon.empty())
            break;
        cout << balloon.front().second << ' ';
        int value = balloon.front().first;
        // cout << balloon.front().second << ' ' << value << '\n';
        balloon.pop_front();

        if (value > 0)
        {
            int i = 0;
            while (1)
            {
                i++;
                if (i == value)
                    break;
                balloon.push_back(balloon.front());
                balloon.pop_front();
            }
        }
        else if (value < 0)
        {
            int i = 0;
            while (1)
            {
                if (i == value)
                    break;
                balloon.push_front(balloon.back());
                balloon.pop_back();

                i--;
            }
        }
    }
}