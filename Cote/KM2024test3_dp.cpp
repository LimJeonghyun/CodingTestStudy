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
    bool flag = false;

    for (int i = 0; i < N; i++)
    {
        dp[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (domino.at(j).second == domino.at(i).first)
            {
                dp[i] = max(dp[i], dp[j] + 1);
                flag = true;
                answer = min(answer, N - dp[i]);
            }
        }
    }

    if (!flag)
    {
        // 하나도 매치되는 게 없는 경우 하나만 남기고 나머지는 다 지워야 하므로
        answer = N - 1;
    }

    domino.clear();
    return answer;
}

int main()
{
    // vector<int> A = {2, 4, 1, 3, 4, 6, 2, 4, 1, 6};
    // cout << solution(A) << endl; // 3 출력 기대
    // vector<int> B = {1, 5, 3, 3, 1, 3};
    // cout << solution(B) << endl; // 2 출력 기대
    // vector<int> C = {5, 1, 2, 6, 6, 1, 3, 1, 4, 3, 4, 3, 4, 6, 1, 2, 4, 1, 6, 2};
    // cout << solution(C) << endl; // 7출력 기대 - 8이 나옴
    vector<int> D = {1, 1, 1, 1, 1, 1};
    cout << solution(D) << endl; // 7출력 기대 - 8이 나옴
    vector<int> E = {5, 1, 2, 6, 6, 1, 3, 1, 4, 3, 4, 3, 4, 6, 1, 2, 4, 1, 6, 2};
    cout << solution(E) << endl; // 7출력 기대 - 8이 나옴
    return 0;
}