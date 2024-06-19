#include <iostream>

using namespace std;

int gold[1001];
int silver[1001];
int bronze[1001];

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, country;

    cin >> n >> country;

    for (int i = 0, index; i < n; i++)
    {
        cin >> index;
        cin >> gold[index] >> silver[index] >> bronze[index];
    }

    int ranking = 0;
    for (int i = 1; i <= n; i++)
    {
        if (gold[i] > gold[country])
        {
            ranking++;
        }
        else if (gold[i] == gold[country])
        {
            if (silver[i] > silver[country])
            {
                ranking++;
            }
            else if (silver[i] == silver[country])
            {
                if (bronze[i] > bronze[country])
                {
                    ranking++;
                }
            }
        }
    }

    cout << ranking + 1 << '\n';
}