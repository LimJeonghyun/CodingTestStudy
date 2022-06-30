#include <iostream>
using namespace std;

int main(){
    int T, K, ind;
    cin >> T;

    for(int i = 0; i<T; i++){
        cin >> K;
        ind=0;
        while(1){
            if(K%2 == 1) cout << ind << endl;
            K/=2;
            // cout<< "*" << K<< endl;
            if(K==0) break;
            ind++;
        }
    }

    return 0;
}