#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x)
{
    bool answer = true;
    string num = to_string(x);
    int count = 0;

    for (int i = 0; i < num.size(); i++)
    {
        count += num[i] - '0';
    }

    if (x % count != 0)
    {
        answer = false;
    }
    cout << num << '\n';
    return answer;
}