#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int A, B, C, D;

    cin >> A >> B >> C >> D;

    if (D >= 3600)
    {
        A += D / 3600;
        D = D % 3600;
    }
    if (D >= 60)
    {
        B += D / 60;
        D = D % 60;
    }
    if (D > 0)
    {
        C += D;
    }

    if (C >= 60)
    {
        B += C / 60;
        C = C % 60;
    }
    if (B >= 60)
    {
        A += B / 60;
        B = B % 60;
    }
    if (A >= 24)
    {
        A = A % 24;
    }

    cout << A << ' ' << B << ' ' << C << '\n';
}