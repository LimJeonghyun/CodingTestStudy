// c++: 0ms, python: 68ms

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    map<string, int> num ={{"A", 2}, {"B", 2}, {"C", 2}, {"D",3}, {"E",3},{"F",3}, {"G", 4},{"H", 4},{"I", 4}, {"J", 5},{"L", 5},{"K", 5}, {"M", 6},{"N", 6},{"O", 6}, {"P", 7}, {"Q", 7}, {"R", 7},  {"S", 7},{"T", 8}, {"U", 8}, {"V", 8}, {"W", 9},{"X", 9},{"Y", 9}, {"Z", 9}};
    string dial;
    string tmp;
    int result=0;

    cin >> dial;
    
    for(int i = 0; i<dial.size(); i++){
        tmp = dial[i];
        if(num.find(tmp) != num.end()){
            result+=num[tmp]+1;
        }
    }
    cout<<result;
    return 0;
}