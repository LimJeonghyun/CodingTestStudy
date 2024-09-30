#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

vector<int> solution(int brown, int yellow)
{
    vector<int> answer;
    int area = brown + yellow;

    for (int i = 3; i <= sqrt(area); i++)
    {
        if (area % i == 0)
        {
            int width = area / i;

            if ((width + i) * 2 - 4 == brown)
            {
                answer.push_back(width);
                answer.push_back(i);
            }
        }
    }

    return answer;
}

int main()
{
    vector<int> answer = solution(24, 24);

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer.at(i) << '\n';
    }
}