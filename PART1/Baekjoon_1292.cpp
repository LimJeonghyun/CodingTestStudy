#include <iostream>
using namespace std;

int main(){
    int A,B;
    int result=0, count=1, num=1;
    cin >> A >> B;

    while(1){
        for(int i=0; i<num; i++){
            // cout << num << endl;
            if(count>=A && count <=B) result+=num;
            count++;
        }
        num++;
        if(count>B) break;
    }
    cout << result << endl;
    return 0;
}