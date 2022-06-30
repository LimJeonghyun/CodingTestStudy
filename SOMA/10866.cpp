#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main(){
    int N;
    deque <int> d;
    string cmd;
    int tmp;

    cin >> N;
    for(int i=0; i<N; i++){
        cin >> cmd;
        if(cmd=="push_front"){
            cin >> tmp;
            d.push_front(tmp);
        }
        else if(cmd=="push_back"){
            cin >> tmp;
            d.push_back(tmp);
        }
        else if(cmd=="pop_front"){
            if(!d.empty()){
                cout << d.front() << "\n";
                d.pop_front();
            }
            else cout << -1 << "\n";
        }

        else if(cmd=="pop_back"){
            if(!d.empty()){
                cout << d.back() << "\n";
                d.pop_back();
            }
            else cout << -1 << "\n";
        }

        else if(cmd=="size") cout << d.size() << "\n";

        else if(cmd=="empty") cout << d.empty() << "\n";

        else if(cmd=="front"){
            if(d.empty()) cout << -1 << "\n";
            else cout << d.front() << "\n";
        }

        else if(cmd=="back"){
            if(d.empty()) cout << -1 << "\n";
            else cout << d.back() << "\n";
        }      
    }
}