#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int i;
    int nump;
    int count;
    string tmp;
    string result="";
    cin >> nump;

    vector<string> first;
    vector<string> players(nump);

    for(i = 0; i<nump; i++){
        cin >> players[i];
    }

    for(i = 0; i< players.size(); i++){
        count = 1;
        for(int j = 0 ;j<i; j++){
            if(players[i][0] == players[j][0]) count++;
        }
        // 계속 틀린 이유 : 이름 철자가 딱 5명만 있어야함....
        if(count == 5){
            tmp = players[i][0];
            first.push_back(tmp);
        }
    }
    first.erase(unique(first.begin(), first.end()),first.end());
    sort(first.begin(), first.end());
    if(first.size() == 0) cout << "PREDAJA" << endl;
    else{ for(i = 0; i<first.size(); i++){
            result = result + first[i];
        }
        cout << result << endl;
    }

    return 0;
}