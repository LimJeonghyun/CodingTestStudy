// 재귀 탐색의 기본
// n-1개의 배열에 순서대로 값을 넣어가면서 넣는 재귀함수를 구현

// 1. 수를 받아 배열에 저장하고, 연산자의 수를 입력 받는다.

// 2. + 에서 / 까지 순서대로 i 칸에 배정하고 연산자의 개수를 저장하는 배열에 해당 위치의 값을 1씩 추가한다.

//  2-1. 연산자가 / 인경우 분모가 0이 오게 되는 경우라면 진행하지 않는다.

// 3. 연산 결과를 최대, 최솟값과 비교하면서 값을 갱신한다.

// 4. 출력 



#include <iostream>
using namespace std;

int N;
int num[11];
int op[4];
int maxn=-1000000001;
int minn=1000000001;

void cal(int result, int idx){
    // index == 연잔자 갯수랑 같아짐
    if (idx == N) {
        if (result > maxn) maxn = result;
        if (result < minn) minn = result;
        return;
    }
    cout << "max : " << maxn << endl;
    cout << "min : " << minn << endl;

    cout << "result : " << result << "\n" << "index : " << idx << endl;
    // 재귀함수를 실행
    // 연산자가 4개이므로 4개 실행
    for(int i = 0; i < 4; i++)
    {
        if(op[i] > 0)
        {
            op[i]--; // 연산자 하나 사용했으므로 1개 줄여줌
            if(i == 0)
                cal(result + num[idx], idx+1);
            else if(i == 1)
                cal(result - num[idx], idx+1);
            else if(i == 2)
                cal(result * num[idx], idx+1);
            else
                cal(result / num[idx], idx+1);
            op[i]++; // 다른 연산자를 사용할 것이므로 아까 줄였던 연산자 개수 늘려줌
    
        }
    }
    return;
}

int main(){
    cin >> N;
    for(int i = 0; i<N; i++){
        cin >> num[i];
    }
    for(int i=0; i<4; i++){
        cin >> op[i];
    }
    cal(num[0], 1);
    cout << maxn << endl;
    cout << minn << endl;
    return 0;
}