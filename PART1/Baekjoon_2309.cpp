// Brute Force 문제
// 전체 값에서 두명의 키를 빼서 0으로 만들기
// O(n)

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector <int> dwalf (9,0);
    int sum = 0;

    for(int i = 0; i < 9; i++){
        cin >> dwalf[i];
        sum+=dwalf[i];
    }
    sum-=100;
    sort(dwalf.begin(), dwalf.end());

    for(int i=0; i<9; i++){
        sum-=dwalf[i];

        if(find(dwalf.begin(), dwalf.end(), sum)!=dwalf.end()) {
            dwalf.erase(dwalf.begin()+i);
            dwalf.erase(remove(dwalf.begin(), dwalf.end(), sum), dwalf.end());
            break;
        }
        // 만약 난쟁이 키가 아닌 것을 알았다면 다시 원상태로 돌려줘야함..!
        else sum+=dwalf[i];
    }

    cout << "\n";
    for(int i=0; i<7; i++){
        cout << dwalf[i] << endl;
    }
    return 0;
}