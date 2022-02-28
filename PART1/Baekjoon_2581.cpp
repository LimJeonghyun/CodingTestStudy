// 왜인진 모르겠지만 정확한 소수 찾기를 해야 테스트 케이스가 작동함...!

#include <iostream>
using namespace std;

int main(){
    int N,M,count=0, result=0, min=0, counta=0;
    cin >> N >> M;

    for(int i = N; i <= M; i++){
        for(int j=1; j<=i ; j++){
            if(i%j==0) count++;
            // cout<<"!";
        }
        // cout << "*" << count << endl;
        if(count==2){
            // cout << i << endl;
            result+=i;
            counta++;
        }
        if(counta==1 && min==0) {
            min=i;
        }
        count = 0;
    }

    if(counta==0) cout<<-1<<endl;
    else{ 
        cout << result << "\n" << min << endl;
    }
    return 0;
}