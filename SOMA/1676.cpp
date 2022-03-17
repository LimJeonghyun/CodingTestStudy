#include <iostream>
using namespace std;
// n이 0~500 까지 가능
// 2*5 = 10 이므로 2*5 쌍이 몇개인지 알아내기 -> 2가 5보다 많이 생기므로 5의 개수만 파악
// 주의할 점: 5의 제곱수: 5*5=> 0 2개, 125=> 0 3개, 725는 n=500보다 크므로 제외
// 5로 나눈 몫, 25와 나눈 몫, 125와 나눈 몫을 더하면 최종 답!
int main(){
    int N, count2=0, count5=0;
    cin >> N;

    count5=N/5 + N/25 + N/125;
    cout << count5 << endl;
    return 0;
}
