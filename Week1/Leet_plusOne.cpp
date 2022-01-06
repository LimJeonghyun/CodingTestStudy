#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         int num;
//         int decimal=1;

//         for(int i=digits.size()-1; i<=0; i--){
//             num = digits[i]*decimal;
//             decimal=decimal*10;
//         }
//         int count=digits.size()-1;
//         list<int> result(count);
//         num+=1;
//         decimal=10;

//         for(int i=0; i<digits.size()-1; i++){
//             result.push_back(num%decimal);
//             num = num/decimal;
//             decimal=decimal*10;
//         }
//     }
// };

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

    int decimal = 1;
    string num;
    int p;
    //reverse(digits.begin(), digits.end());
    for(int i = 0 ; i < digits.size(); i++){
        num = num + to_string(digits[i]);
    }
    cout << num << ":" << endl;
    p = stol(num);
    p = p+1;
    cout << p << endl;
    tmp = to_string(p);
    // cout << p;
    for(int i = 0; i<tmp.length(); i++){
        result.push_back(tmp[i]-'0');
    }
    for(int k = 0; k < result.size(); k++){
        cout << result[k] << endl;
    }
    return 0;
}