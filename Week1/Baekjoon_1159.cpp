#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int i;
    int nump;
    cin >> nump;
    vector<string> first;

    vector<string> players(nump);
    for(i = 0; i<nump; i++){
        cin >> players[i];
    }

    for(i = 0; i< players.size(); i++){
        first.push_back(players[i][0]);
        if(players[i][0])
    }

    return 0;
}