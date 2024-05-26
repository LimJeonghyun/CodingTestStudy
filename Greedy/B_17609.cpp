#include <iostream>

using namespace std;

int isPanlindrome(int left, int right, string word, bool test)
{
    while (left < right)
    {
        if (word[left] != word[right])
        {
            if (test)
            {
                if (isPanlindrome(left + 1, right, word, false) == 0 || isPanlindrome(left, right - 1, word, false) == 0)
                    return 1;
            }
            return 2;
        }
        left++;
        right--;
    }
    return 0;
}

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string word;

        cin >> word;

        cout << isPanlindrome(0, word.length() - 1, word, true) << '\n';
    }
}