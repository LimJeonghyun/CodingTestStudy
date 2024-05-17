#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(string name)
{
    int answer = 0;
    int n = name.length();
    int turn = n - 1;

    for (int i = 0; i < n; i++)
    {
        if (name[i] - 'A' < 14)
            answer += name[i] - 'A';
        else
            answer += 'Z' - name[i] + 1;

        int index = i + 1;
        while (index < n && name[index] == 'A')
            index++;

        int a = i;
        int b = n - index;
        turn = min(turn, min(a + 2 * b, 2 * a + b));
    }

    answer += turn;
    return answer;
}

int main()
{
    string name = "JEROEN";
    int result = solution(name);

    cout << result << '\n';
}