#include <iostream>
#include <vector>
using namespace std;

int main(){
    int max, min;
    int N;
    
    cin >> N;
    vector <int> tmp(N, 0);

    for(int i = 0; i<N; i++){
        cin>>tmp[i];
    }

    max=tmp[0];
    min=tmp[0];

    for(int i = 0; i<N; i++){
        if(tmp[i]<min) min=tmp[i];
        if(tmp[i]>max) max=tmp[i];
    }

    cout << min << " " << max << endl;
    
    return 0;
}