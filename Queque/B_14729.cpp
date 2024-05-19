#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n;
    priority_queue<double, vector<double>, greater<double>> score;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        double tmp;
        cin >> tmp;
        score.push(tmp);
    }

    for (int i = 0; i < 7; i++)
    {
        cout.precision(3);
        printf("%.3lf\n", score.top());
        score.pop();
    }
}