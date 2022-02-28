#include <iostream>
using namespace std;

int main(){
    int n1, n2, min=0, cof=1, com=0;
    cin >> n1 >> n2;

    if(n1<n2) min=n1;
    else min=n2;
// min값을 포함할 수 도 있음...!
// 여러가지 방향으로 생각해볼 것...!
// 예를 들어 12 24 라면 12가 최대공약수가 되는 것임
    for(int i=1; i<=min; i++){
        if(n1%i==0 && n2%i==0) cof=i;
    }
    com=cof*(n1/cof)*(n2/cof);

    cout << cof << "\n" << com << endl;
    return 0;
}