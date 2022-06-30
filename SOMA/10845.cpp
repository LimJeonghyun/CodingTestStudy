#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(){
    int N;
    cin >> N;
    int tmp;
    string cmd;
    queue <int> q;

    for(int i=0; i<N; i++){
        cin >> cmd;
        if(cmd == "push"){
            cin >>tmp;
            q.push(tmp);
        }
        else if(cmd=="front") {
            if(q.empty())  cout << -1 << "\n";
            else cout << q.front() << "\n";
        }
        else if(cmd=="back") {
            if(q.empty())  cout << -1 << "\n";
            else cout << q.back() << "\n";
        }
        else if(cmd=="size") cout << q.size() << "\n";
        else if(cmd=="empty") cout << q.empty() << "\n";
        else if(cmd=="pop"){
            if(q.empty()) cout << -1 << "\n";
            else {
                cout << q.front() << "\n";
                q.pop();
            }
                
        } 
    }
    return 0;
}
