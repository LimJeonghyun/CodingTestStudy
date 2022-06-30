#include <iostream>
#include <vector>
using namespace std;

int main(){
    int K, N, tmp;
    long long result=0;
    vector <int> lan(K,0);

    cin >> K >> N;

    for(int i =0; i<K; i++){
        cin >> lan[i];
    }
    long long min = 1;
    long long max = 2147483647;

    while(min <= max){
        long long mid = (max+min)/2;
        long long lan_cnt = 0;
        for(int i=0;i<K; i++) {
            lan_cnt+=(lan[i]/mid);
        }
        if(lan_cnt<N) max=mid-1;
        else min = mid+1;
    }
   cout << max << endl;
}

// 랜선의 최소 길이는 1, 최대길이는 가장 긴 랜선 길이
// mid는 (min+max)/2로 두면서, mid 길이만큼 각 랙선들을 자르고 그 개수를 cnt변수에 저장
// 랜선이 구하고자 하는 개수보다 적으면 더 짧게 잘라야 하므로 max길이를 mid-1만큼 줄임
// 구하고자 하는 개수가 많으면 min길이를 mid+1 길이를 늘림