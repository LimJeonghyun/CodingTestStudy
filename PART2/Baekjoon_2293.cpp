#include <iostream>
using namespace std;

int main(){
    int n, k;
    int coin[100];
    int cnt=0;

    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> coin[i];
        if(k%n==0) cnt++;
    }

    for(int i=0; i<n; i++){
        do{

        }while()
    }
    return 0;
}

// 3 10
// 1
// 2
// 5

// 1) 5 * 2
// 2) 2*5
// 3) 1*10

// 4) 1 2 2 5
// 5) 2 4
// 6) 3 1 1
// 7) 4 3
// 8) 5 0 1
// 9) 6 2
// 10) 8 1