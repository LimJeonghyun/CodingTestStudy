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
    string exp;
    stack<double> st;

    cin >> n >> exp;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < exp.size(); i++)
    {
        if (exp[i] >= 'A' && exp[i] <= 'Z')
        {
            st.push(v[exp[i] - 'A']);
        }
        else
        {
            if (!st.empty())
            {
                double tmp = st.top();
                st.pop();
                if (exp[i] == '+')
                {
                    tmp += st.top();
                }
                else if (exp[i] == '-')
                {
                    tmp = st.top() - tmp;
                }
                else if (exp[i] == '*')
                {
                    tmp *= st.top();
                }
                else if (exp[i] == '/')
                {
                    tmp = st.top() / tmp;
                }
                st.pop();
                st.push(tmp);
            }
        }
    }

    cout << fixed;
    cout.precision(2);
    cout << st.top();
}