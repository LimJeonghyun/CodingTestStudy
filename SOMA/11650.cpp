#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector< pair<int, int> > v;
    pair<int, int> tmp;
    for(int i=0; i<N; i++){
        cin >> tmp.first >> tmp.second;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    for(int i=0; i<N; i++){
        cout << v[i].first << " " << v[i].second << "\n";
    }
    return 0;
}