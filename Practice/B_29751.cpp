#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int w, h;
    float triangle;

    cin >> w >> h;

    triangle = w * h * 0.5;

    printf("%.1f", triangle);
}