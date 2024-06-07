#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    priority_queue<double> score;
    double average;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        double tmp;
        cin >> tmp;
        score.push(tmp);
    }

    double maxScore = score.top();

    for (int i = 0; i < n; i++)
    {
        average += score.top() / maxScore * 100.0;
        score.pop();
    }

    printf("%f\n", average / (double)n);
}