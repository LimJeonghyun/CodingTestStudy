#include <iostream>
using namespace std;

int main(){
    int N, count=0, tmp=0, num=0;
    cin >> N;

    for(int i = 0; i<N; i++){
        cin >> tmp;
        for(int j = 1; j<=tmp; j++){
            if(tmp%j==0) num++;
        }
        if(num==2) count++;
        num=0;
    }
    cout << count << endl;
    return 0;
}