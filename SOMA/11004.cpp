#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;

// cout / cin 대신 scanf 와 printf 사용 -> 입출력 시간 때문에
// 알고리즘 형태는 다 맞틈 -> 시간 초과 때문에 cin, cout 말고 scanf, printf를 사용해야 했던 것 뿐
int main(){
    int N, K;
    cin >> N >> K;
    int tmp;
    vector <long long> v;
    for(int i=1; i<N+1; i++){
        scanf("%d", &tmp);
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    printf("%d", v[K-1]);
    return 0;
}