#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string s = "abcdefghij";
    int k=3;
    char fill = 'x';
    int count = 0;
    vector<string> result;
    string tmp="";

    for(int i = 0; i<s.length(); i++){
        tmp+=s[i];
        count ++;
        if(count != k && i+1 == s.length()){
            for(int j=count; j<k; j++){
                tmp+=fill;
                count++;
            }
        }
        if(count == k){
            cout << tmp << endl;
            result.push_back(tmp);
            count = 0;
            tmp = "";
        }
    }
    return 0;
}