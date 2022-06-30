#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    string buscket;
    stack<char> check;
    int result=0;
    int count1=0, count2=0;
    int top=0;

    cin >> buscket;
    
    for(int i=0; i<buscket.length(); i++){
        cout << result << "\n";
        // () 계산  
        if(buscket[i]==')' && !check.empty() && count1==0){
            result+=2;
            if(check.top()=='(') {
                check.pop();
                if(buscket[i+1]=='(' || buscket[i+1]=='['){
                    check.push(result-'0');
                    result=0;
                }
            }
            else if(isdigit(check.top())>0) {
                result+=(check.top()-'0');
                check.pop();
            }
            count1++;
        }
        //[] 계산
        else if(buscket[i]==']' && !check.empty() && count1==0){
            result+=3;
            if(check.top()=='[') {
                check.pop();
                 if(buscket[i+1]=='(' || buscket[i+1]=='['){
                    check.push(result-'0');
                    result=0;
                }
            }
             else if(isdigit(check.top())>0) {
                result+=(check.top()-'0');
                check.pop();
            }
            top--;
            count1++;
        }

        // (X) 계산
        // (())
        else if(count1!=0 && buscket[i]==')' && !check.empty()){
            // (())
            result*=2;
            if(check.top()=='(') {
                check.pop();
                 if(buscket[i+1]=='(' || buscket[i+1]=='['){
                    check.push(result-'0');
                    result=0;
                }
            }
             else if(isdigit(check.top())>0) {
                result+=(check.top()-'0');
                check.pop();
            }
            else break;
            if(check.empty()) count1=0;

            // ([])
        }
        
        // [X] 계산
        else if(count1!=0 && buscket[i]==']' && !check.empty()){
            result*=3;
            if(check.top()=='[') {
                check.pop();
                 if(buscket[i+1]=='(' || buscket[i+1]=='['){
                    check.push(result-'0');
                    result=0;
                }
            }
             else if(isdigit(check.top())>0) {
                result+=(check.top()-'0');
                check.pop();
            }
            else break;
            if(check.empty()) count1=0;
        }

        else {
            check.push(buscket[i]);
            top++;
        }
    }
    if(!check.empty()) result=0;
    cout << result << endl;
    return 0;
}