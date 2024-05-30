#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int s, p;
    string dna;
    int dnaCheck[4]; // {A, C, G, T}
    vector<int> acgt(100, 0);
    int count = 0;

    cin >> s >> p;
    cin >> dna;
    for (int i = 0, tmp; i < 4; i++)
    {
        cin >> dnaCheck[i];
    }

    int start = 0;
    int end = p;
    int a = 0, c = 0, g = 0, t = 0;

    for (int i = start; i < end; i++)
    {
        if (dna[i] == 'A')
        {
            a++;
        }
        else if (dna[i] == 'C')
        {
            c++;
        }
        else if (dna[i] == 'G')
        {
            g++;
        }
        else if (dna[i] == 'T')
        {
            t++;
        }
    }

    if (a >= dnaCheck[0] && c >= dnaCheck[1] && g >= dnaCheck[2] && t >= dnaCheck[3])
    {
        count++;
    }

    while (end < s)
    {

        if (dna[start] == 'A')
            a--;
        else if (dna[start] == 'C')
            c--;
        else if (dna[start] == 'G')
            g--;
        else
            t--;
        if (dna[end] == 'A')
            a++;
        else if (dna[end] == 'C')
            c++;
        else if (dna[end] == 'G')
            g++;
        else
            t++;
        start++;
        end++;
        if (a >= dnaCheck[0] && c >= dnaCheck[1] && g >= dnaCheck[2] && t >= dnaCheck[3])
        {
            count++;
        }
    }
    cout << count << '\n';
}