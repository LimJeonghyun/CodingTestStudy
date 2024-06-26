#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> island(101);

bool cmp(vector<int> a, vector<int> b)
{
    return a[2] < b[2];
}

int findParent(int idx)
{
    if (island[idx] == idx)
        return idx;
    return island[idx] = findParent(island[idx]);
}

int solution(int n, vector<vector<int>> costs)
{
    int answer = 0;

    for (int i = 0; i < n; i++)
        island[i] = i;

    sort(costs.begin(), costs.end(), cmp);

    // for (int i = 0; i < costs.size(); i++)
    //     cout << costs[i][0] << '\t' << costs[i][1] << '\t' << costs[i][2] << endl;

    for (int i = 0; i < costs.size(); i++)
    {
        int start = findParent(costs[i][0]);
        int end = findParent(costs[i][1]);
        cout << start << "\t" << end << endl;
        int cost = costs[i][2];

        if (start != end)
        {
            answer += cost;
            island[end] = start;
        }
    }

    return answer;
}

int main()
{
    vector<vector<int>> costs = {{0, 1, 1}, {0, 2, 2}, {1, 2, 5}, {1, 3, 1}, {2, 3, 8}};
    int n = 4;

    int result = solution(n, costs);

    cout << result << "\n";
}