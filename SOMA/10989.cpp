#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    // 시간초과를 줄여줌
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL); 

    int N;
    int tmp;
    cin >> N;
    int count[10001]={0,};

    for(int i=0; i<N; i++){
        cin >> tmp;
        count[tmp]++;
    }


    for(int i=0; i<10001; i++){
        for(int j=0; j<count[i]; j++){
            cout << i << '\n';
        }
    }
    return 0;
}