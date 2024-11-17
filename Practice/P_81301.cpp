#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s)
{
    int answer = 0;

    string number[11] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    string numberWord = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            answer *= 10;
            answer += s[i] - '0';
            numberWord = "";
        }
        else
        {
            numberWord += s[i];
            // cout << numberWord << '\n';
            if (numberWord != "")
            {
                for (int j = 0; j < 10; j++)
                {
                    if (numberWord == number[j])
                    {
                        answer *= 10;
                        answer += j;
                        numberWord = "";
                        break;
                    }
                }
            }
        }
    }

    if (numberWord != "")
    {
        for (int j = 0; j < 10; j++)
        {
            if (numberWord == number[j])
            {
                answer *= 10;
                answer += j;
            }
        }
    }

    return answer;
}