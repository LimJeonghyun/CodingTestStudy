// c++:0ms python:72ms
// runtime error가 뜰 때는 vector를 줄이는 것도 방법이 되는 듯
// 6은 2와 3으로 모두 나누어지므로 값이 같을 수 없으므로 이를 빠르게 생각해내는 것이 포인트
// 규칙도 생각해보자

#include <iostream>
using namespace std;

int main(){
    int doorTotal=0;
    int tmp;
    int prev;
    cin >> doorTotal >> prev;

    if(doorTotal>=6) cout << "Love is open door" << endl;
    else{
        for(int i=1; i<doorTotal; i++){
            if(prev==0) tmp=1;
            else if(prev==1) tmp=0;
            cout << tmp << endl;
            prev = tmp;
        }
    }
    return 0;
}