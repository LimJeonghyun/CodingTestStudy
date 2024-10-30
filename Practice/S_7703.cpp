#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{

    int N;
    string answer = "";

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string s, t;

        cin >> s >> t;

        transform(s.begin(), s.end(), s.begin(), ::toupper);
        transform(t.begin(), t.end(), t.begin(), ::toupper);

        int n = s.find('X');

        answer += t[n];
        // cout << s <<'\n';
    }

    cout << answer << '\n';
    return 0;
}