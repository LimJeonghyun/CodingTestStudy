#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number)
{
    int answer = 0;
    int triple = 0;

    for (int i = 0; i < number.size() - 2; i++)
    {
        triple += number.at(i);
        for (int j = i + 1; j < number.size() - 1; j++)
        {
            triple += number.at(j);
            for (int k = j + 1; k < number.size(); k++)
            {
                triple += number.at(k);
                if (triple == 0)
                {
                    answer++;
                }
                triple -= number.at(k);
            }
            triple -= number.at(j);
        }
        triple = 0;
    }
    return answer;
}