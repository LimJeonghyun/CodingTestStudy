#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(string name)
{
    int answer = 0;
    string start_name = "";
    for (int i = 0; i < name.length(); i++)
        start_name += 'A';

    int current_index = 0;
    while (1)
    {
        answer += min(name[current_index] - 'A', 'Z' - name[current_index] + 1);
        start_name[current_index] = name[current_index];
        if (start_name == name)
            return answer;

        int left_index = current_index;
        int left_cnt = 0;
        while (start_name[left_index] == name[left_index])
        {
            left_index--;
            left_cnt++;
            if (left_index == -1)
                left_index = name.size() - 1;
        }

        int right_index = current_index;
        int right_cnt = 0;
        while (start_name[right_index] == name[right_index])
        {
            right_index++;
            right_cnt++;
            if (right_index == name.size())
                right_index = 0;
        }
        if (left_cnt < right_cnt)
        {
            current_index = left_index;
            answer += left_cnt;
        }
        else
        {
            current_index = right_index;
            answer += right_cnt;
        }
    }
    return answer;
}

int main()
{
    string name = "JEROEN";
    // string name = "JEROEN";
    int result = solution(name);

    cout << result << '\n';
}