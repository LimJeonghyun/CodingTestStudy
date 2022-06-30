#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
    string n;
    int b, ans=0;
    cin >> n >> b;
    int degree = n.length()-1;

    for(int i=0; i<n.length(); ++i){
        if('A'<=n[i]&& n[i]<='Z') ans+=((int)n[i]-55)*(int)pow(b, degree);
        else ans+=((int)n[i]-48)*(int)pow(b, degree);
        --degree;
    }
    cout << ans << endl;
}