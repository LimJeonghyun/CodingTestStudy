#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    int n;
    bool result=true;
    string bus;
    stack <char> check;
    cin >> n;

    for(int i=0; i<=n; i++){
        getline(cin, bus);
        for(int j=0; j<bus.length(); j++){
            if(bus[j]=='(') check.push(bus[j]);
            else if(bus[j]==')'){
                if(check.empty()==true) {
                    result=false;
                    break;
                }
                else check.pop();
            }
        }
        if (result==false && check.empty()==false) cout << "NO" << "\n";
        else cout << "YES" << "\n";
        bus="";
    }
    return 0;
}