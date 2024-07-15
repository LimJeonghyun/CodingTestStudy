// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> family[101];
// int visited[101];
// int answer;
// int n;

// void dfs(int start, int cnt)
// {
//     if (cnt == n)
//     {
//         return;
//     }

//     for (int i = 0; i < family[start].size(); i++)
//     {
//         int next = family[start][i];
//         if (visited[next] == 0)
//         {
//             visited[next] = visited[start] + 1;
//             dfs(next, cnt + 1);
//         }
//     }
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cout.tie(NULL);
//     cin.tie(NULL);

//     int m;
//     int a, b;

//     cin >> n >> a >> b >> m;

//     for (int i = 0; i < m; i++)
//     {
//         int tmp1, tmp2;
//         cin >> tmp1 >> tmp2;

//         family[tmp1].push_back(tmp2);
//         family[tmp2].push_back(tmp1);
//     }

//     dfs(a, 0);
//     if (visited[b] == 0)
//     {
//         cout << -1 << '\n';
//     }
//     else
//     {
//         cout << visited[b] << '\n';
//     }
// }

#include <iostream>
#include <vector>

using namespace std;

vector<int> family[101];
int visited[101];
int answer;
int n;

void dfs(int start, int end, int cnt)
{
    visited[start] = 1;
    if (start == end)
    {
        answer = cnt;
    }

    for (int i = 0; i < family[start].size(); i++)
    {
        int next = family[start][i];
        if (visited[next] == 0)
        {
            visited[next] = visited[start] + 1;
            dfs(next, end, cnt + 1);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int m;
    int a, b;

    cin >> n >> a >> b >> m;

    for (int i = 0; i < m; i++)
    {
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;

        family[tmp1].push_back(tmp2);
        family[tmp2].push_back(tmp1);
    }

    dfs(a, b, 0);
    if (answer == 0)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << answer << '\n';
    }
}
