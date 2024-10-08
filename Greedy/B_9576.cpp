#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int T;
    int book[1001];

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N, M;

        cin >> N >> M;

        vector<pair<int, int>> needs;
        memset(book, 0, sizeof(book));

        for (int j = 0, a, b; j < M; j++)
        {
            cin >> a >> b;
            needs.push_back({b, a});
        }
        sort(needs.begin(), needs.end());

        int result = 0;
        for (int j = 0; j < needs.size(); j++)
        {
            for (int k = needs.at(j).second; k <= needs.at(j).first; k++)
            {
                if (!book[k])
                {
                    book[k] = 1;
                    result++;
                    break;
                }
            }
        }

        cout << result << '\n';
    }
}