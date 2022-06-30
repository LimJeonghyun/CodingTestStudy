#include <iostream>
using namespace std;

bool isprim(int n){
    for(int i=2; i*i<=n; ++i){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    // 13, 14줄 추가 하고 바로 통과

    cin.tie(NULL);
	ios_base::sync_with_stdio(0);
    int n;
    int a, b;
    bool check;
    while (true){
        cin >> n;
        if(n==0) break;
        check = false;
        for(int i=3; i<n; i+=2){
            a=i;
            b=n-a;
            if(isprim(a) && isprim(b)){
                check=true;
                break;
            }
        } 
       if(check)cout << n << " = " << a << " + " << b << '\n';
       else if(!check) cout << "Goldbach's conjecture is wrong." << "\n";
    }
    return 0;
}
