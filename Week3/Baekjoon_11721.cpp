// python: 72ms C++: 0ms

#include <iostream>
#include <string>
using namespace std;

int main(){
    string word;
    cin >> word;
    int j = 1;
    for(int i = 0; i<word.length(); i++){
        cout << word[i];
        if(j%10==0 && i!=0) cout<<"\n";
        j++;
    }
    return 0;
}