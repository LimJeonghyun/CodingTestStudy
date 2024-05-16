#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> routes)
{
    int answer = 1;

    sort(routes.begin(), routes.end());

    int endPoint = routes[0][1];

    for (int i = 0; i < routes.size(); i++)
    {
        if (endPoint < routes[i][0])
        {
            answer++;
            endPoint = routes[i][1];
        }
        if (endPoint >= routes[i][1])
            endPoint = routes[i][1];
    }
    return answer;
}

int main()
{
    vector<vector<int>> routes = {{-20, -15}, {-14, -5}, {-18, -13}, {-5, -3}};
    int result = solution(routes);
    cout << result << "\n";
}