#include <iostream>
#include <algorithm>

using namespace std;

int arr[30001];

int main()
{
    int n, d, k, c;
    // n : 입력받는 초밥 수
    // d : 초밥 가짓 수
    // k : 연속으로 먹는 수
    // c : 쿠폰 초밥
    int count = 0;
    int answer = 0;

    cin >> n >> d >> k >> c;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        int coupon = 1;
        bool check[3001] = {
            false,
        };

        for (int j = i; j < i + k; j++)
        {
            if (!check[arr[j % n]])
                check[arr[j % n]] = true;
            else
                flag++;
            // cout << j % n << ' ' << j << '\n';
        }
        if (check[c])
            coupon = 0;
        answer = max(answer, k - flag + coupon);
        // memset(check, false, sizeof(check));
    }
    cout << answer << '\n';
}