// 파이썬 72ms, C++ 4ms
// char 비교시 작은 따움표 사용
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int size;
    string answer;
    int index = 0;
    cin >> size;
    vector<int> score(size, 0);
    for(int i = 0; i < size; i++){
        cin >> answer;
        for(int j = 0; j<answer.size(); j++){
            if(answer[j] == 'O'){
                score[i]+=1+index;
                index++;
            }
            else index = 0;
        }
        index=0;
    }
    for(int i = 0; i<size; i++){
        cout << score[i]<<endl;
    }
    return 0;
}