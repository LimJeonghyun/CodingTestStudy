#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, int n)
{
    string answer = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (isspace(s[i]))
        {
            answer += ' ';
        }
        else if (islower(s[i]) && 'z' - s[i] < n)
        {
            int idx = n - ('z' - s[i]);
            answer += 'a' + (idx - 1);
        }
        else if (isupper(s[i]) && 'Z' - s[i] < n)
        {
            int idx = n - ('Z' - s[i]);
            answer += 'A' + (idx - 1);
        }
        else
        {
            answer += s[i] + n;
        }
    }
    return answer;
}