#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    int cnt = 1;
    stack<int> st;
    vector<string> result;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        while (cnt <= num)
        {
            st.push(cnt);
            cnt += 1;
            result.push_back("+");
        }

        // cout << "*" << cnt << " " << st.top() << '\n';
        // cout << num << '\n';
        if (st.top() == num)
        {
            st.pop();
            result.push_back("-");
        }
        else
        {
            cout << "NO" << '\n';
            return 0;
        }
    }

    for (int i = 0; i < result.size(); i++)
    {
        cout << result.at(i) << '\n';
    }
}