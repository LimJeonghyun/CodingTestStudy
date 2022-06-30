#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    vector <int> num (10,0);

    cin >> N;
    for(int i=0; i<N; i++){
        for(int j=0; j<10; j++){
            cin >> num[j];
        }
        sort(num.begin(), num.end());
        cout << num[7] << endl;
        num.assign(10,0);
    }

    return 0;
}