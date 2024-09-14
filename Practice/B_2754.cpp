#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    float gpa[4] = {4.0, 3.0, 2.0, 1.0};
    float result = 0.0;
    string score;

    cin >> score;

    if (score == "F")
    {
        cout << "0.0" << '\n';
        return 0;
    }
    if (score[1] == '+')
    {
        result += 0.3;
    }
    else if (score[1] == '-')
    {
        result -= 0.3;
    }
    else if (score[1] == '0')
    {
        cout << result + gpa[score[0] - 'A'] << ".0" << '\n';
        return 0;
    }
    cout << result + gpa[score[0] - 'A'] << '\n';
}