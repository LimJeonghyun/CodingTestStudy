#include <iostream>
#include <string>
using namespace std;

int main(){
    string A,B,C,D;
    string tmp1, tmp2;
    long long result;

    cin >> A >> B >> C >> D;
    tmp1 = A+B;
    tmp2 = C+D;
    result = stoll(tmp1)+ stoll(tmp2);
    cout << result << endl;
}