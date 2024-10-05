#include <iostream>
#include <string>

using namespace std;

bool lower[26], upper[26];

int solution(string &letters)
{
    int answer = 0;

    if (letters.size() <= 1)
    {
        return answer;
    }

    for (char letter : letters)
    {
        if (islower(letter))
        {
            lower[letter - 'a'] = true;
        }
        else if (isupper(letter))
        {
            upper[letter - 'A'] = true;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (lower[i] && upper[i])
        {
            int lowerIdx = letters.rfind('a' + i);
            int upperIdx = letters.find('A' + i);

            if (lowerIdx < upperIdx)
            {
                answer++;
            }
        }
    }

    return answer;
}

int main()
{
    string letters = "aaAbcCABBc";
    cout << solution(letters) << endl; // 2 출력
    letters = "xyzXYZabcABC";
    cout << solution(letters) << '\n'; // 6
    letters = "abcABCefG";
    cout << solution(letters) << '\n'; // 3
    return 0;
}
