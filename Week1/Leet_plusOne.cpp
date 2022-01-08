// python : 16ms C++ : 4ms
// vector안에서 해결할 수 있는거는 vector안에서 해결해보자!!
// 다양하게 접근하자

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> digits;
    vector<int> result;
    string tmp;
    digits.push_back(9);
    digits.push_back(8);
    digits.push_back(7);
    digits.push_back(6);
    digits.push_back(5);
    digits.push_back(4);
    digits.push_back(3);
    digits.push_back(2);
    digits.push_back(1);
    digits.push_back(0);

    int test = 0;
    // 199 -> 9 9 9 0 0 0 1
    reverse(digits.begin(), digits.end());
    for(int i = 0 ; i < digits.size(); i++){
        if(digits[i]+1 > 9){
            test = 1;
            digits[i] = 0;
        }
        else{
            test = 0;
            digits[i]++;
            break;
        }
    }
    if (test) digits.push_back(1);
    reverse(digits.begin(), digits.end());
    for(int i = 0; i<digits.size(); i++){
        cout << digits[i];
    }
    return 0;
}