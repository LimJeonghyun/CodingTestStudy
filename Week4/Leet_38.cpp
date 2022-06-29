#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    string result = "1";
    vector <int> num;
    string tmp;
    num.push_back(1); 
    cin >> n;

    for(int i=1; i<n; i++){
        tmp="";
        for(int j = 1; j<i+1; j++){
            if(count(num.begin(), num.end(), j)!=0) {
                tmp+=to_string(j);
                tmp+=to_string(count(num.begin(), num.end(), j));
                cout<< count(num.begin(), num.end(), j) << "!" << endl;
            }
        }
        num.clear();
        cout<<i << "?" <<endl;
        for(int j = 0; j<tmp.length(); j++){
            num.push_back(tmp[j]);
            cout << num.back() << endl;
        }
        // cout<<num.back()<<endl;
    }

    // for(int i = 0; i<num.size(); i++){
    //     result+=num[i];
    // }
    // cout << tmp <<endl;
    return 0;
}

// pseudo code
// 단어 list 만들기
// 단어 list별 값 저장
// i값과 결과값 string으로 출력