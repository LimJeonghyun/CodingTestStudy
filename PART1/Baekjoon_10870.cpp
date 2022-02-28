#include <iostream>
using namespace std;

int main(){
    int n1=0,n2=1,result=0;
    int N;
    cin >> N;
    for(int i = 1; i<N; i++){
        result=n1+n2;
        n1=n2;
        n2=result;
        // cout << result << endl;
    }
    if(N==0) result=0;
    if(N==1) result=1;
    cout << result << endl;
    return 0;
}