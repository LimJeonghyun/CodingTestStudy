using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long ticket = 0;

    for (int i = 1; i <= count; i++)
    {
        ticket += price * i;
    }

    if (ticket - money <= 0)
    {
        return 0;
    }
    else
    {
        answer = ticket - money;
    }

    return answer;
}