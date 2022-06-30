#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int,int> a, pair<int, int>b){
    if(a.second==b.second) return a.first < b.first;
    else return a.second < b.second;
}

int main(){
    int n;
    cin >> n;
    vector <pair <int, int> >v;
    pair<int, int> tmp;

    for(int i=0; i<n; i++){
        cin >> tmp.first >> tmp.second;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), compare);

    for(int i=0; i<n; i++){
        cout << v[i].first << " " <<  v[i].second << "\n";
    }


}