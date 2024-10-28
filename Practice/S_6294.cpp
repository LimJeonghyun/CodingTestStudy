#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char **argv)
{

    int N, K;
    float student[1000001];

    cin >> N >> K;

    for (int i = 0; i < N; i++)
    {
        cin >> student[i];
    }

    for (int i = 0, a, b; i < K; i++)
    {
        cin >> a >> b;

        double sum = 0.0;
        for (int j = a - 1; j < b; j++)
        {
            sum += student[j];
        }
        cout << fixed << setprecision(2);
        cout << sum / (b - a + 1) << '\n';
    }
    return 0;
}