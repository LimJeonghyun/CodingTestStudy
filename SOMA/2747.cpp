#include <iostream>
using namespace std;
int d[50];

int fibo(int n){
    if(n==0) return 0;
    else if(n==1) return 1;
    else if(d[n]!=0) return d[n];
    return d[n]=(fibo(n-1)+fibo(n-2)); 
    cout << d[n] << n;
}

int main(){
    int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}