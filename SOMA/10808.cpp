#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    char temp;
    int num=0;
    int arr[26]={0,};

    for(int i=0; i<s.length(); i++){
        temp=s[i];
        // for(char j = 'a'; j<='z'; j++){
        //     if(temp==j){
        //         num=j-'a';
        //         arr[num]++;
        //     }
        // }
        temp=s[i]-'a';
        arr[temp]++;
    }

    for(int i = 0; i<26; i++){
        cout << arr[i]<< " ";
    }

    return 0;
}