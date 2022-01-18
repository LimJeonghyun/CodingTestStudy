// c++: 0ms Python: 72ms
// 문제를 잘 읽자
#include <iostream>
#include <string>
using namespace std;

int main(){
    string word;
    cin >> word;
    string result="";
    
    for(int i = 0; i<word.length(); i++){
        if(word[i]=='A') result+='X';
        else if(word[i]=='B') result+='Y';
        else if(word[i]=='C') result+='Z';
        else result+=char(word[i]-3);
    }
    cout << result << endl;
    return 0;
}