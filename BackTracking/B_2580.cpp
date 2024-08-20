#include <iostream>
#include <vector>

using namespace std;

int map[10][10];
int zero_cnt = 0;
bool endFlag = false;
vector<pair<int, int>> v;

bool check(pair<int, int> v)
{
    int square_x = v.first / 3;
    int square_y = v.second / 3;

    for (int i = 0; i < 9; i++)
    {
        if (map[i][v.second] == map[v.first][v.second] && i != v.first)
        {
            return false;
        }
        if (map[v.first][i] == map[v.first][v.second] && i != v.second)
        {
            return false;
        }
    }

    for (int i = square_x * 3; i < square_x * 3 + 3; i++)
    {
        for (int j = square_y * 3; j < square_y * 3 + 3; j++)
        {
            if (map[i][j] == map[v.first][v.second])
            {
                if (i != v.first && j != v.second)
                {
                    return false;
                }
            }
        }
    }
    return true;
}

void sudoku(int n)
{
    if (n == zero_cnt)
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                cout << map[i][j] << ' ';
            }
            cout << '\n';
        }
        endFlag = true;
        return;
    }
    for (int i = 1; i <= 9; i++)
    {
        map[v[n].first][v[n].second] = i;
        if (check(v[n]))
        {
            sudoku(n + 1);
        }
        if (endFlag)
        {
            return;
        }
    }

    map[v[n].first][v[n].second] = 0;
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> map[i][j];
            if (map[i][j] == 0)
            {
                zero_cnt++;
                v.push_back({i, j});
            }
        }
    }

    sudoku(0);
}