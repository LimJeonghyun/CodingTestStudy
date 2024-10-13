#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int N;
    int cute = 0, notCute = 0;

    cin >> N;

    for (int i = 0, check; i < N; i++)
    {
        cin >> check;

        if (check)
        {
            cute++;
        }
        else
        {
            notCute++;
        }
    }

    if (cute > notCute)
    {
        cout << "Junhee is cute!" << '\n';
    }
    else
    {
        cout << "Junhee is not cute!" << '\n';
    }
}