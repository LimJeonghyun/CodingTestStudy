#include <iostream>
#include <deque>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int T;
    int n;
    string cmd = "";
    string data;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        bool check = true;
        bool final = true;
        deque<int> num;

        cin >> cmd;
        cin >> n;
        cin >> data;

        string s = "";
        for (int i = 0; i < data.size(); i++)
        {
            if (isdigit(data[i]))
            {
                s += data[i];
            }
            else
            {
                if (!s.empty())
                {
                    num.push_back(stoi(s));
                    s = "";
                }
            }
        }

        for (int i = 0; i < cmd.size(); i++)
        {
            if (cmd[i] == 'R')
            {
                check = !check;
            }
            else if (cmd[i] == 'D')
            {
                if (num.empty())
                {
                    cout << "error\n";
                    final = false;
                    break;
                }
                else
                {
                    if (check)
                    {
                        num.pop_front();
                    }
                    else
                    {
                        num.pop_back();
                    }
                }
            }
        }

        if (final)
        {
            cout << "[";
            if (check)
            {
                for (int i = 0; i < num.size(); i++)
                {
                    cout << num[i];
                    if (i != num.size() - 1)
                    {
                        cout << ",";
                    }
                }
            }
            else
            {
                for (int i = num.size() - 1; i >= 0; i--)
                {
                    cout << num[i];
                    if (i != 0)
                    {
                        cout << ",";
                    }
                }
            }
            cout << "]\n";
        }
    }
}