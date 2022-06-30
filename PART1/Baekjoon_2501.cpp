#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N,K;
    vector <int> num;
    cin >> N >> K;
    for(int i = 1; i<N+1; i++){
        if(N%i==0) {
            // cout << i << endl;
            num.push_back(i);
        }
    }
    cout << num[K-1] << endl;
    return 0;
}