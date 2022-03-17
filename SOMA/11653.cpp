#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int n=2;

   while(1){
    //    cout << N << "\n";
       if(N%n==0) {
           cout << n << "\n";
           N=N/n;
           n=2;
       }
       else n++;
       if(N==1) break;
   }
    return 0;
}