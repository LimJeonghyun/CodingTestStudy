// c++에는 원래의 순서를 손상시키지 않으면서 정렬하는 stable_sort 가 있음....

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, string>a, pair<int, string>b){
    // if(a.first==b.first) return a.second >b.second;
    // else 
    return a.first < b.first;
}

int main(){
    int n;
    cin >> n;
    
    vector < pair <int, string> >v;
    pair<int, string> tmp;

    for(int i=0; i<n; i++){
        cin >> tmp.first >> tmp.second;
        v.push_back(tmp);
    }
    stable_sort(v.begin(), v.end(), compare);
    for(int i=0; i<n; i++){
        cout << v[i].first << " " << v[i].second << "\n";
    }
    return 0;
}