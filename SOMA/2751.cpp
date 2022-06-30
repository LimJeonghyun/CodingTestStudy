// 시간 초과... -> endl 때문에...
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N;
    int tmp;
    cin >> N;
    // int num[N];
    vector<int> num(N,0);
    for(int i=0; i<N; i++){
        cin >> num[i];
        // num.pushback(tmp);
    }
    sort(num.begin(), num.end());
    // sort(num, num+N);
    for(int i=0; i<N; i++){
        cout << num[i] << "\n";
    }
    return 0;
}