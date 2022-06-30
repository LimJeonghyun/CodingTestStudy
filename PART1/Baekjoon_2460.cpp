#include <iostream>
using namespace std;

int main(){
    int off, on, result=0, max=0;

    for(int i = 0; i < 10; i++){
        cin >> off >> on;
        result=result-off+on;
        if(result > max) max = result;
    }

    cout << max << endl;
    return 0;
}