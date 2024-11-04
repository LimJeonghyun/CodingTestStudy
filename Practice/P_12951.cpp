#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
    string answer = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (i == 0 && isalpha(s.at(i)) && islower(s.at(i)))
        {
            answer += toupper(s.at(i));
        }
        else if (i > 0 && s.at(i - 1) == ' ' && islower(s.at(i)))
        {
            answer += toupper(s.at(i));
        }
        else if (i > 0 && s.at(i - 1) != ' ' && isupper(s.at(i)))
        {
            answer += tolower(s.at(i));
        }
        else
        {
            answer += s.at(i);
        }
    }
    return answer;
}