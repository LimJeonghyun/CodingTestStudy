#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    int n;
    bool result;
    string bus;
    stack <char> check;
    cin >> n;

    for(int i=0; i<n; i++){
        result=true;
        cin >> bus;
        for(int j=0; j<bus.length(); j++){
            if(bus[j]=='(') check.push(bus[j]);
            else if(bus[j]==')'){
                if(check.empty()){
                    result=false;
                    break;
                }
                else check.pop();
            }
        }
        if (result==false || !check.empty()) cout << "NO" << "\n";
        else if(result == true && check.empty()) cout << "YES" << "\n";
        while (!check.empty()) {
		    check.pop();
	    }
    }
    return 0;
}