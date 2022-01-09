// for문 : 591ms
// while문 : 23ms (참고)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//children 인원과 cookies 갯수 비교
// while 문
// class solution{
//     public:
//     int findContentChildren(vector<int>& g, vector<int>& s){
//         int i = 0;
        //    int j = 0;
        //    int greed = 0;
        //    sort(s.begin(), s.end());
        //    sort(g.being(), g.end());
        //    while(i != s.size() && j != g.size()){
        //        if(s[i] >= g[j]){
        //            i++;
        //            j++;
        //            greed++;
        //        }
        //         else{
        //             i++;
        //         }
        //    }
//     }
// };

int main(){
    bool check;
    int greed = 0;
    vector<int> g = {10,9,8,7};
    vector<int> s = {10,9,8,7};
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    for(int i = 0; i<g.size(); i++){
        cout << s[i] << "*" << g[i] << endl;
    }
    for(int i = 0; i<g.size(); i++){
        if(i >= s.size()) break;
        if(g[i] <= s[i]) greed++;
        else{for(int j = 0; j< s.size(); j++){
                if(g[i] <= s[j]) {
                    greed++;
                    s[j] = 0;
                    break;
                }
            }
        }
    }
    cout << greed;
    return 0;
}