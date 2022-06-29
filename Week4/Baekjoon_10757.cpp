#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string a, b;
    int sum=0;
    string result;
    cin >> a >> b;
    while(!a.empty() || !b.empty() || sum){
        if(!a.empty()){
            sum+=a.back()-'0';
            a.pop_back();
        }
        if(!b.empty()){
            sum+=b.back()-'0';
            b.pop_back();
        }
        result.push_back((sum%10)+'0');
        sum/=10;
    }
    reverse(result.begin(), result.end());
    cout << result << endl;
    cout << a << b;
    return 0;
}