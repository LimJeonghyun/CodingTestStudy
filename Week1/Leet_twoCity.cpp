// g++ -o < > -std=c++11 < > compmile
#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

bool SortSec(const vector<int>& v1, const vector<int>& v2){
    if(v1[1] == v2[2]) return v1[0] < v2[0];
    return v1[1] > v2[1];
}
int main(){
    vector < vector<int> > costs = { {10,10}, {30, 30}, {400, 400}, {300, 300} };
    // vector< vector<int> > costs = { {259, 770}, {448, 54}, {926, 667}, {184, 139}, {840, 118}, {557, 469} };
    //vector< pair<int,int> > diff;
    // sort(costs.begin(),costs.end(),[](vector<int> a,vector<int> b){return a[0]-a[1]<b[0]-b[1];});
    //     int j=0,s=0;
    //     for(j=0;j<costs.size()/2;j++)s+=costs[j][0];
    //     for(j;j<costs.size();j++)s+=costs[j][1];
    //     return s;
    int size = costs.size();
    vector< vector<int> > diff(size);
    int result = 0;
    vector<int> a;
    vector<int> b;
    int test=0;

    for(int i = 0; i<size; i++){
        diff[i].push_back(i);
        diff[i].push_back(abs(costs[i][0]-costs[i][1]));
        //{ {0, ?}, {1, ?}... }
    }
    sort(diff.begin(), diff.end(), SortSec);

    for(int i = 0 ;i<diff.size(); i++){
        if(costs[diff[i][0]][0] > costs[diff[i][0]][1]) test = 1; //b에 넣기
        else if((costs[diff[i][0]][0] < costs[diff[i][0]][1])) test = 2; //a에 넣기

        if((a.size()>=size/2)) test = 1; //b에 넣기
        else if((b.size()>=size/2)) test = 2; //a에 넣기

        if(test==1) b.push_back(costs[diff[i][0]][1]);
        else if(test==2) a.push_back(costs[diff[i][0]][0]);
    }
    //cout << "a : " <<a.size() << " \t" << "b : " <<b.size();
    for(int i = 0; i<size/2; i++){
        cout << a[i] << " " << b[i] << "\n";
        result+=b[i]+a[i];
    }
    cout << result;
    return 0;
}

// 두 값의 차이를 모두 구해야함
// 인덱스를 알아야함
// A위치와 B위치를 나누어서 저장
// 마지막에 값을 모두 더함
// 259 - 770 = -511 259 2 ->A 259
// 448 - 54 = 394 54 3 ->B 54
// 926 - 667 = 259 667 4 ->B 667
// 184 - 139 = 45 184 6 ->A
// 840 - 118 = 722 118 1  ->B 118
// 577 - 469 = 108 577 5 ->A