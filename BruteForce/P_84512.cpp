#include <string>
#include <vector>
#include <iostream>

using namespace std;

char vowel[5] = {'A', 'E', 'I', 'O', 'U'};
int cnt = -1;
int answer = 0;
string target = "";
void dfs(string word)
{
    cnt++;
    if (word == target)
    {
        answer = cnt;
        return;
    }

    if (word.length() >= 5)
    {
        return;
    }

    for (int i = 0; i < 5; i++)
    {
        dfs(word + vowel[i]);
    }
}

int solution(string word)
{
    target = word;
    dfs("");

    return answer;
}

int main()
{
    cout << solution("AAAAE") << '\n';
}