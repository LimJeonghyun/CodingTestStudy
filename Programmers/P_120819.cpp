#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money)
{
    vector<int> answer;

    int americano = money / 5500;

    answer.push_back(americano);
    answer.push_back(money - americano * 5500);

    return answer;
}