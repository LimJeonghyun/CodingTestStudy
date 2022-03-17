#include <iostream>
using namespace std;

int main(){
    int T;
    int A,B;
    int min;
    int com;
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> A >> B;
        if(A<=B) min = A;
        else min = B;

        for(int j=1; j<=min; j++){
            if(A%j==0 && B%j==0) com = j;
        }
        cout << com*(A/com)*(B/com) << "\n";
    }
    return 0;
}