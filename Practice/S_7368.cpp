#include <iostream>

using namespace std;

int main(int argc, char **argv)
{

    int a, b, d;
    long long answer = 0;

    cin >> a >> b >> d;

    int start = d, end = d;

    while (1)
    {
        if (start > a)
        {
            answer += a;
            start -= a;
        }
        else if (start == a)
        {
            answer += a;
            break;
        }
        else if (start < a)
        {
            answer += start;
            start = 0;
            break;
        }
        answer += b;
    }

    while (1)
    {
        if (end > b)
        {
            answer += b;
            end -= b;
        }
        else if (end == b)
        {
            answer += b;
            break;
        }
        else if (end < b)
        {
            answer += end;
            end = 0;
            break;
        }
        answer += a;
    }

    cout << answer << '\n';

    return 0;
}