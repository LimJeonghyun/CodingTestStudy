// python : 16ms, C++ : 7ms
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<string> strs = {"flower", "flow", "fly"};
    string minw= strs[0];
    string tmp="";
    int index=0;
    string answer="";
    int min = strs[0].size();

    for(int i = 1; i<strs.size(); i++){
        if(min > strs[i].size()){
            min = strs[i].size();
            minw = strs[i];
        }
    }
    cout << minw << endl;
    for(int j = 0; j<minw.size(); j++){
        for(int i = 0; i<strs.size(); i++){
            if(strs[i][j] != minw[j]){
                index = 1;
                break;
            }
        }
        if(index == 1) break;
        else tmp = tmp+minw[j];
    }
    cout <<'"' << tmp << '"' << endl;
    return 0;
}