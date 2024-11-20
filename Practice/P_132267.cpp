#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n)
{
    int answer = 0;
    int coke = n;

    while (1)
    {
        if (coke < a)
        {
            break;
        }

        answer += (coke / a) * b;
        int tmp = coke;
        coke = (tmp / a) * b + (tmp % a);
    }

    return answer;
}