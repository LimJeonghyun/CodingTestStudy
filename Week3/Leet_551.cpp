#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "PPALLL";
    int p, l, a;
    bool result = true;
    p=0;
    l=0;
    a=0;
    for(int i = 0; i<s.length(); i++){
        if(s[i] == 'A')a++;
        else if(s[i]=='L') l++;
        if(s[i] != 'L') l=0;
        if(a>=2 || l>=3){ 
            cout << "false";
            break;
        }
    }
    cout << "true";
    return 0;
}