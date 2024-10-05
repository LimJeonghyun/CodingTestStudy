#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> domino; // 도미노를 저장할 벡터
int N;                         // 도미노 개수

int solution(vector<int> &A)
{
    N = A.size() / 2;
    int answer = N;

    for (int i = 0; i < A.size() - 1; i += 2)
    {
        domino.push_back({A[i], A[i + 1]});
    }

    vector<int> dp(N + 1, 0);

    for (int i = 0; i < N - 1; i++)
    {
        int tmpResult = 1;
        int start = i, end = start + 1;
        int firstNode = domino[start].second, secondNode = domino[end].first;

        while (1)
        {
            if (start >= N || end >= N)
            {
                break;
            }
            if (firstNode == secondNode)
            {
                tmpResult++;
                start = end;
                end++;
                if (end >= N)
                {
                    break;
                }
                firstNode = domino[start].second;
                secondNode = domino[end].first;
            }
            else
            {
                end++;
                if (end >= N)
                {
                    break;
                }
                secondNode = domino[end].first;
            }
        }
        answer = min(answer, N - tmpResult);
    }
    domino.clear();
    return answer;
}

int main()
{
    vector<int> A = {2, 4, 1, 3, 4, 6, 2, 4, 1, 6};
    cout << solution(A) << endl; // 3 출력 기대
    vector<int> B = {1, 5, 3, 3, 1, 3};
    cout << solution(B) << endl; // 2 출력 기대
    vector<int> C = {5, 1, 2, 6, 6, 1, 3, 1, 4, 3, 4, 3, 4, 6, 1, 2, 4, 1, 6, 2};
    cout << solution(C) << endl; // 7출력 기대 - 8이 나옴
    return 0;
}
