#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, m, k;
    vector<pair<int, int>> beers;

    cin >> n >> m >> k;

    for (int i = 0; i < k; i++)
    {
        int v, c;
        cin >> v >> c;
        beers.push_back({c, v});
    }

    sort(beers.begin(), beers.end());
    // 맥주의 도수의 오름차순으로 정렬
    // 도수를 낮게 마시는게 중요하므로!

    priority_queue<int> pq;
    long long total = 0;

    for (int i = 0; i < k; i++)
    {
        pq.push(-beers[i].second);
        // 낮은 선호도를 빼기 위해 음수로 저장
        // 낮은 선호도가 위로 올라온다
        total += beers[i].second;
        // 선호도 더하기

        if (pq.size() > n)
        {
            // n보다 더 많이 마실 수 없기 때문에
            total += pq.top();
            // 선호도가 이미 음수이므로 더하기로 뺄 선호도를 뺀다
            pq.pop();
            // 낮은 선호도를 빼고 데이터 지우기
        }

        if (pq.size() == n && total >= m)
        {
            // n만큼 마시고 만족도도 m보다 높을 때는 이미 맥주가 오름차순으로 정렬되어 있으므로 방금 마신 맥주가 가장 높은 도수일 것 이므로 현재 마신 맥주 출력
            cout << beers[i].first << '\n';
            return 0;
        }
    }

    cout << -1 << '\n';
}