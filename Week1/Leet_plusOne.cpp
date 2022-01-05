#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int num;
        int decimal=1;

        for(int i=digits.size()-1; i<=0; i--){
            num = digits[i]*decimal;
            decimal=decimal*10;
        }
        int count=digits.size()-1;
        list<int> result(count);
        num+=1;
        decimal=10;

        for(int i=0; i<digits.size()-1; i++){
            result.push_back(num%decimal);
            num = num/decimal;
            decimal=decimal*10;
        }
        cout << result;

    }
};

int main(){
    vector<int> digits = {1, 2, 3};
    Solution.plusOne(digits);
    return 0;
}