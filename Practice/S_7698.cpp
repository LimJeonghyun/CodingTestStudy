#include <iostream>

using namespace std;

int main(int argc, char **argv)
{

    int T;

    cin >> T;

    for (int i = 0, vote; i < T; i++)
    {
        cin >> vote;

        if (vote >= 5)
        {
            for (int j = 0; j < vote / 5; j++)
            {
                cout << "++++ ";
            }
            vote = vote % 5;
        }
        if (vote > 0 && vote < 5)
        {
            for (int j = 0; j < vote; j++)
            {
                cout << "|";
            }
        }
        cout << "\n";
    }
    return 0;
}