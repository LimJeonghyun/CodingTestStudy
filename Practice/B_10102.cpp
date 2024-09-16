#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int V;
    int scoreA = 0, scoreB = 0;
    string vote;

    cin >> V;
    cin >> vote;

    for (int i = 0; i < V; i++)
    {
        if (vote[i] == 'A')
        {
            scoreA++;
        }
        if (vote[i] == 'B')
        {
            scoreB++;
        }
    }
    if (scoreA > scoreB)
    {
        cout << "A" << '\n';
    }
    else if (scoreA < scoreB)
    {
        cout << "B" << '\n';
    }
    else
    {
        cout << "Tie" << '\n';
    }
}