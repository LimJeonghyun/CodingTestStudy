// 이중 vector -> vector <\tvector<int>\t> : 띄어쓰기 주의 \t->띄어쓰기하는 부분
// push_back을 해주기 위해서 빈칸을 만들어줘야 함 : v.pushback(vector<int>()) -> 행 초기화

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int numRows;
    cin >> numRows;
    vector< vector<int> >pascal;
    for(int i = 0; i<numRows; i++){
        pascal.push_back(vector<int>());
        for(int j = 0; j<i+1; j++){
            if((j-1)<0 or j == i) pascal[i].push_back(1);
            else pascal[i].push_back(pascal[i-1][j-1]+pascal[i-1][j]);
        }
    }

    for(int i = 0; i<pascal.size(); i++){
        for(int j = 0; j < pascal[i].size(); j++){
                 cout << pascal[i][j];
        }
        cout<< " \n";
    }
    return 0;

}

// < RESULT >
// Runtime : 0ms : faster than 100% of C++
// memory: 6.6 MB