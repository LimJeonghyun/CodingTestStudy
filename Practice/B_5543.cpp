#include <iostream>

using namespace std;

int main()
{
    int ham1, ham2, ham3;
    int drink1, drink2;
    int result = 0;

    cin >> ham1 >> ham2 >> ham3 >> drink1 >> drink2;

    result = min(ham1, min(ham2, ham3));
    result += min(drink1, drink2);

    cout << result - 50 << '\n';
}