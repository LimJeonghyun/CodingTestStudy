#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string number, int k)
{
    string answer = "";
    int digitNum = number.length() - k;
    int max = number[0] - '0';
    int index = 0;
    int tmpIndex = 0;

    // cout << number << endl;

    while (1)
    {
        for (int i = tmpIndex; i <= number.size() - digitNum; i++)
        {
            int tmp = number[i] - '0';
            if (max < tmp)
            {
                max = tmp;
                index = i;
            }
        }
        answer += max + '0';
        // cout << max << endl;
        max = -1;
        digitNum -= 1;
        tmpIndex = index + 1;
        // cout << index << "\n";
        // cout << answer << '\t';
        if (digitNum == 0)
            break;
    }

    return answer;
}

int main()
{
    string number = "1231234"; // 10
    int k = 3;

    string result = solution(number, k);

    cout << result << "\n";
}

// 10 - 4 = 6
// 775841