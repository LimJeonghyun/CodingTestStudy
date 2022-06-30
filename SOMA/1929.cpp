#include <iostream>
using namespace std;

int main(){
    int M, N;
    int count;
    cin >> M >> N;
    for(int i=M; i<=N; i++){
        count=0;
        for(int j=2; j*j<=i; j++){
            if(i%j==0){
                count++;
                break;
            }
        }
        if(i!=1 && count==0) cout << i << "\n";
    }
    return 0;
}