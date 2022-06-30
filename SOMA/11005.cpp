#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int N;
    int B;
    string ans;
    cin >> N >> B;

    while(N!=0){

        // ASCII 문자
        if(N%B>=10) ans+=N%B+55;
        // 10+55 = 65 = 'A'
        else ans+=N%B+48;
        // 0+48 = 48 = 'O'
        N/=B;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}