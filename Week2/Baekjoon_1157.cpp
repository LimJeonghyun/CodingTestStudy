// python : 2452ms c++ : 76ms
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string words;
    cin >> words;
    int count = 0;
    int tmp;
    int max=0;
    string maxc="";
    vector<char> al;

    // "Mimmissipi"
    for(int i = 0; i<words.size(); i++){
        if((words[i] >= 'a') && (words[i] <= 'z')) words[i] = words[i]-'a'+'A';
        if(find(al.begin(), al.end(), words[i]) == al.end()) al.push_back(words[i]);
    }

    for(int i=0; i<al.size(); i++){
        tmp = 0;
        for(int j=0; j<words.size(); j++){
            if(al[i] == words[j]) tmp++;
        }
        if(max < tmp){
            max = tmp;
            maxc = al[i];
        }
        else if(max == tmp){
            max = tmp;
            maxc = "?";
        }
        // cout << al[i] << max;
    }
    cout << maxc << endl;
    return 0;
}