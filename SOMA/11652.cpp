#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

int N;
int Max;
long long MaxNum;
map<long long, int> counting;
vector <long long> reserve;

int main(){
    cin >> N;

    for(int i=0; i<N; i++){
        long long temp;
        cin >> temp;

        if(counting[temp] == 0){
            reserve.push_back(temp);
            counting[temp]=1;
        }
        else counting[temp]++;
    }

    sort(reserve.begin(), reserve.end());

    for(int i=0; i<reserve.size(); i++){
        if(counting[reserve[i]]>Max){
            Max=counting[reserve[i]];
            MaxNum=reserve[i];
        }
    }

    cout << MaxNum << endl;
}