#include <iostream>
using namespace std;

// 큰수이기 때문에 long long 사용
int main(){
    int count = 0;
    // int result=0, S;
    // long long result=0;
    // long long S;
    int N=1;

    cin >> S;

    while(1){
        result=result+N;
        count++;
        if(result > S){
            count--;
            break;
        }
        N++;
    }
    cout << count << endl;
    return 0;
}