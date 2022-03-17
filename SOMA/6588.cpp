#include <iostream>
using namespace std;

int main(){
    int n;
    int a, b;
    while(1){
        cin >> n;
        if(n==0) break;
        for(int i=3; i<=n/2;i+=2){
            a=i;
            b=n-a;
            if(i==3 && b%2!=0 && b%3!=0) break;
            else if(i%2 !=0 && )
        }
    }
    cout << a << " " << b << endl;
    return 0;
}
