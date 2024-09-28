#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> answer;
bool isAnswer = false;
bool check[10001];

void dfs(string target, vector<vector<string>> tickets, int cnt)
{
    answer.push_back(target);

    if (answer.size() == tickets.size())
    {
        isAnswer = true;
    }

    for (int i = 0; i < tickets.size(); i++)
    {
        if (check[i])
        {
            continue;
        }
        if (tickets[i][0] == target)
        {
            check[i] = true;
            dfs(tickets[i][1], tickets, cnt + 1);

            if (!isAnswer)
            {
                answer.pop_back();
                check[i] = false;
            }
        }
    }
}

vector<string> solution(vector<vector<string>> tickets)
{
    sort(tickets.begin(), tickets.end());
    dfs("ICN", tickets, 0);
    return answer;
}

int main()
{
    vector<string> answer;
    vector<vector<string>> tickets;

    tickets.push_back({"ICN", "JFK"});
    tickets.push_back({"HND", "IAD"});
    tickets.push_back({"JFK", "HND"});

    answer = solution(tickets);

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer.at(i) << '\n';
    }
}