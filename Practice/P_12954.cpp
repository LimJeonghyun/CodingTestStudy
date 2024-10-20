#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n)
{
    vector<long long> answer;
    long long num = x;

    answer.push_back(x);

    for (int i = 0; i < n - 1; i++)
    {
        num += x;

        answer.push_back(num);
    }
    return answer;
}