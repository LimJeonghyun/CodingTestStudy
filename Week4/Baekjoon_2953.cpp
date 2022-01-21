// python: 72ms c++:0ms

#include <iostream>
using namespace std;

int main(){
    int index=0;
    int tmp=0;
    int tmpr=0;
    int max=0;
    for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            cin >> tmp;
            tmpr+=tmp;
            tmp=0;
        }
        if(max<tmpr){
            max=tmpr;
            index=i;
        }
        tmpr=0; 
    }
    cout << index+1 << " "<< max << endl;
    return 0;
}