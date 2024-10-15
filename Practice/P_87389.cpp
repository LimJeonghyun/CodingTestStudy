#include <iostream>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

using namespace std;

int solution(int n)
{
    int answer = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 1)
        {
            answer = i;
            break;
        }
    }
    return answer;
}

int main()
{
    cout << solution(10) << '\n';
    cout << solution(12) << '\n';
}