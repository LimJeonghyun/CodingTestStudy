#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> prices)
{
    vector<int> answer;
    queue<int> qPrice;

    for (int i = 0; i < prices.size(); i++)
    {
        int tmp = prices.at(i);
        int count = 0;
        for (int j = i + 1; j < prices.size(); j++)
        {
            count++;
            if (tmp > prices.at(j))
                break;
        }
        answer.push_back(count);
    }

    return answer;
}

int main()
{
    vector<int> prices = {1, 2, 3, 2, 3};
    // [4, 3, 1, 1, 0]

    vector<int> answer = solution(prices);

    for (int i = 0; i < answer.size(); i++)
        cout << answer.at(i) << '\t';
}