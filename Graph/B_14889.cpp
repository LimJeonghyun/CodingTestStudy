#include <iostream>
#include <vector>

using namespace std;

int n;
int level[21][21];
int member[21];
int result = 2147483647;

void teamset(int index, int count)
{
    vector<int> start;
    vector<int> link;
    int start_score = 0;
    int link_score = 0;

    if (count == (n / 2))
    {
        for (int i = 0; i < n; i++)
        {
            if (member[i])
            {
                start.push_back(i);
            }
            else
            {
                link.push_back(i);
            }
        }

        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j < n / 2; j++)
            {
                start_score += level[start.at(i)][start.at(j)];
                link_score += level[link.at(i)][link.at(j)];
            }
        }

        if (abs(start_score - link_score) < result)
        {
            result = abs(start_score - link_score);
        }
        return;
    }

    for (int i = index; i < n; i++)
    {
        if (member[i])
        {
            continue;
        }
        else
        {
            member[i] = 1;
            teamset(i, count + 1);
            member[i] = 0;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> level[i][j];
        }
    }

    teamset(0, 0);

    cout << result << '\n';
}
