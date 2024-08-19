#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int cash;
    int stock[15];

    cin >> cash;

    for (int i = 0; i < 14; i++)
    {
        cin >> stock[i];
    }

    int j_cash = cash;
    int j_stock = 0;
    int j_asset = 0;

    for (int i = 0; i < 14; i++)
    {
        if (j_cash >= stock[i])
        {
            j_stock += j_cash / stock[i];
            j_cash = j_cash % stock[i];
        }
    }
    j_asset = j_stock * stock[13] + j_cash;

    int s_cash = cash;
    int s_stock = 0;
    int s_asset = 0;
    int inc = 0, dec = 0;
    bool incFlag = false, decFlag = false;
    int prev = 0;

    for (int i = 0; i < 14; i++)
    {
        if (i > 0 && stock[i - 1] < stock[i])
        {
            inc++;
            dec = 0;
        }
        else if (i > 0 && stock[i - 1] > stock[i])
        {
            dec++;
            inc = 0;
        }
        else if (stock[i - 1] == stock[i])
        {
            inc = 0;
            dec = 0;
        }
        if (inc >= 3)
        {
            s_cash += s_stock * stock[i];
            s_stock = 0;
        }
        else if (dec >= 3 && s_cash >= stock[i])
        {
            // cout << stock[i] << '\n';
            s_stock += s_cash / stock[i];
            s_cash = s_cash % stock[i];
        }
    }
    s_asset = s_stock * stock[13] + s_cash;

    // cout << j_asset << ' ' << s_asset << '\n';

    if (j_asset > s_asset)
    {
        cout << "BNP" << '\n';
    }
    else if (j_asset < s_asset)
    {
        cout << "TIMING" << '\n';
    }
    else if (j_asset == s_asset)
    {
        cout << "SAMESAME" << '\n';
    }
}