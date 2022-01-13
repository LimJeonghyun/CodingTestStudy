// Python : 76ms C++ : 0ms

#include <iostream>
#include <string>
#include <vector>
#include <charconv>
using namespace std;

int main(){
    int num;
    cin >> num;
    string words;
    string result;
    vector <string> wordv;
    for(int i = 0; i <num; i++){
        cin >> words;
        for(int j = 0; j<words.size(); j++){
            if(words[j] == 'Z') result+='A';
            else result+=char(words[j]+1);
        }
        cout << "String #" << i+1 <<"\n" << result << "\n" << endl;
        result ="";
    }
    return 0;
}