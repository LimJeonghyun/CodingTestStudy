#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;

    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<>());
    int len = min(A.size(), B.size());

    for (int i = 0; i < len; i++)
    {
        answer += A.at(i) * B.at(i);
    }

    return answer;
}

int main()
{
    vector<int> A, B;

    A.push_back(1);
    A.push_back(4);
    A.push_back(2);

    B.push_back(5);
    B.push_back(4);
    B.push_back(4);

    cout << solution(A, B);
}