#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    while (1)
    {
        string sentence;
        stack<int> bracket;

        getline(cin, sentence, '.');
        if (sentence == "\n")
            break;

        bool flags = 0;
        for (int i = 0; i < sentence.length(); i++)
        {
            if (sentence[i] == '(' || sentence[i] == '[')
                bracket.push(sentence[i]);
            if (sentence[i] == ')')
            {
                if (!bracket.empty() && bracket.top() == '(')
                    bracket.pop();
                else
                {
                    flags = 1;
                    break;
                }
            }

            if (sentence[i] == ']')
            {
                if (!bracket.empty() && bracket.top() == '[')
                    bracket.pop();
                else
                {
                    flags = 1;
                    break;
                }
            }
        }
        if (!bracket.empty() || flags)
            cout << "no" << '\n';
        else
            cout << "yes" << '\n';
    }
}