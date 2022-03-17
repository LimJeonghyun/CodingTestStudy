#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int N;
    string com;
    int x;
    cin >> N;
    stack<int> store;

    for(int i = 0; i < N; i++){
        cin >> com;
        if (com=="push"){
            cin >> x;
            store.push(x);
        }
        else if (com=="top") {
            if(store.size()!=0) cout << store.top() <<"\n";
            else cout << -1 << "\n";
        }
        else if (com=="empty") {
            cout << store.empty()<<"\n";
        }
        else if (com=="size"){
            cout << store.size()<<"\n";
        } 
            
        else if (com=="pop") {
            if(store.size()!=0) {
                cout << store.top() <<"\n";
                store.pop();
            }
            else cout << -1 << "\n";
        }
    }
    return 0;
    }