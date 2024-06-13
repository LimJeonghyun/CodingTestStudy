#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    map<char, int> alpha;
    string word;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    cin >>
        word;

    for (int i = 0; i < alphabet.length(); i++)
    {
        alpha[alphabet[i]] = 0;
    }

    for (int i = 0; i < word.length(); i++)
    {
        alpha[word[i]] += 1;
    }

    for (auto a : alpha)
    {
        cout << a.second << ' ';
    }
}