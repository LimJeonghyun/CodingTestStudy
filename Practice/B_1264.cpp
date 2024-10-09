#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    while (1)
    {
        string s;
        int count = 0;

        getline(cin, s);

        if (s == "#")
        {
            break;
        }

        for (int i = 0; i < s.length(); i++)
        {
            if (tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 'u')
            {
                count++;
            }
        }

        cout << count << '\n';
    }
    return 0;
}