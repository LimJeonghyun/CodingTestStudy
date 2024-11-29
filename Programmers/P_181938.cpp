#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int a, int b)
{
    int plus = stoi(to_string(a) + to_string(b));
    int mul = 2 * a * b;

    return max(plus, mul);
}