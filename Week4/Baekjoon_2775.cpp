#include <iostream>
using namespace std;

int main(){
    int T, k, n;
    cin >> T;
    int tmp, total;
    
    for(int i = 0; i<T; i++){
        cin >> k >> n;
        total=0;
        tmp=0;
        for(int j = 0; j<k; j++){
            for(int x = 1; x<=n; x++){
                tmp++;
                total+=tmp;
            }
            
        }
        cout << total << endl;
    }
    return 0;
}