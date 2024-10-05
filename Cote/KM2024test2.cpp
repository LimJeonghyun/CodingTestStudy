#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int R, C;

void bfs(int start_x, int start_y, vector<string> &plan, vector<vector<bool>> &visited)
{
    queue<pair<int, int>> q;
    q.push({start_x, start_y});
    visited[start_x][start_y] = true;

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; ++i)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= R || ny < 0 || ny >= C)
            {
                continue;
            }
            if (plan[nx][ny] != '#' && !visited[nx][ny])
            {
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
}

int solution(vector<string> &plan)
{
    R = plan.size();
    C = plan[0].size();
    vector<vector<bool>> visited(R, vector<bool>(C, false));
    int answer = 0;

    for (int i = 0; i < R; ++i)
    {
        for (int j = 0; j < C; ++j)
        {
            if (plan[i][j] == '*' && !visited[i][j])
            {
                bfs(i, j, plan, visited);
                answer++;
            }
        }
    }

    return answer;
}

int main()
{
    vector<string> plan = {
        ".*#..*",
        ".*#*.#",
        "######",
        ".*..#.",
        "...###"};

    cout << solution(plan) << endl; // 3 출력
    return 0;
}
