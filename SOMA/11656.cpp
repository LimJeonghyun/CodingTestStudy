#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    string tmp;
    vector <string> v;
    cin >> tmp;

    v.push_back(tmp);
    for(int i=1; i<=tmp.length()-1; i++){
        // cout << tmp.substr(i, tmp.length()) << "\n";
        v.push_back(tmp.substr(i, tmp.length()-1));
    }

    sort(v.begin(), v.end());

    for(int i=1; i<v.size(); i++){
        cout << v[i] << "\n";
    }
}