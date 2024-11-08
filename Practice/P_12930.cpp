#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
    string answer = "";
    int idx = 1;

    for (int i = 0; i < s.size(); i++)
    {
        if (idx % 2 == 0)
        {
            answer += tolower(s[i]);
        }
        else
        {
            answer += toupper(s[i]);
        }
        idx++;
        if (isspace(s[i]))
        {
            idx = 1;
        }
    }

    return answer;
}