// ^는 XOR연산자
// 왜 이러는지 솔직히 잘 모르겠음....
// 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Answer;
int main(){
    int argc;
    char** argv;
    int T;
    int test_case;
    int number;
    int N;

    cin >> T;
    for(test_case=0; test_case < T; test_case++){
        Answer=0;
        cin >> N;
        int count = 0;
        for(int i = 0; i<N; i++){   
            cin >> number;
            Answer^=number;
            cout << "*" << Answer << endl;
        }
        cout << "Case #" << test_case+1 << endl;
        cout << Answer << endl;
        Answer=0;
    }
    return 0;
}