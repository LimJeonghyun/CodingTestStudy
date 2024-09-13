#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers)
{
    vector<int> answer;

    int student1[5] = {1, 2, 3, 4, 5};
    int student2[8] = {2, 1, 2, 3, 2, 4, 2, 5};
    int student3[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

    int sum1 = 0, sum2 = 0, sum3 = 0;

    for (int i = 0; i < answers.size(); i++)
    {
        if (student1[i % 5] == answers.at(i))
        {
            sum1++;
        }
        if (student2[i % 8] == answers.at(i))
        {
            sum2++;
        }
        if (student3[i % 10] == answers.at(i))
        {
            sum3++;
        }
    }
    int maxSum = max(max(sum1, sum2), sum3);

    if (maxSum == sum1)
    {
        answer.push_back(1);
    }
    if (maxSum == sum2)
    {
        answer.push_back(2);
    }
    if (maxSum == sum3)
    {
        answer.push_back(3);
    }
    return answer;
}

int main()
{
    vector<int> answers;
    answers.push_back(1);
    answers.push_back(3);
    answers.push_back(2);
    answers.push_back(4);
    answers.push_back(2);
    // 1,3,2,4,2

    vector<int> result = solution(answers);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result.at(i) << ' ';
    }
}