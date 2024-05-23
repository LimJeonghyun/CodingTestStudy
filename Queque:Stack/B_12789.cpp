#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    int n;
    int index = 1;
    queue<int> student;
    stack<int> waiting;

    cin >> n;

    for (int i = 0, tmp; i < n; i++)
    {
        cin >> tmp;
        student.push(tmp);
    }

    int i = 0;
    while (index <= n)
    {

        if (!student.empty() && student.front() == index)
        {
            student.pop();
            index++;
        }
        else if (!waiting.empty() && waiting.top() == index)
        {
            waiting.pop();
            index++;
        }
        else
        {
            waiting.push(student.front());
            student.pop();
        }
        // cout << index << ' ' << waiting.top() << '\n';
        if (student.empty() && waiting.empty())
        {
            cout << "Nice" << '\n';
            break;
        }

        if (student.empty() && !waiting.empty() && waiting.top() != index)
            break;
    }
    if (!waiting.empty())
        cout << "Sad" << '\n';
}