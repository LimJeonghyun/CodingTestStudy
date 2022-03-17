#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    int count=0;
    int result=0;
    vector <int> num(N, 0);
    for(int i=0; i<N; i++){
        cin >> num[i];
    }
    for(int i=0; i<N; i++){
        count=0;
        for(int j=2; j<num[i]; j++){
            if(num[i]%j==0) {
                count++;
                break;
            }
        }
        if(num[i]!=1 && count==0) result++;
    }
    cout << result << endl;
    return 0;
}