#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector< vector<int> >questions = {{1,1}, {2,2}, {3,3}, {4,4}, {5,5}};
    int max = 0;
    int tmp = 0;
    int count = -1;
    int j = 0;
    int cal = 0;
    int countk=0;

    for(int i = 0; i<questions.size(); i++){
        tmp+=questions[i][0];
        if(questions.size()-1-questions[i][1] == 1) i+= questions[i][1];
        else{
            cal = questions.size()-1-questions[i][1];
            countk = questions[i][1]+1;
            j+=questions[i][1]+1;
            while(cal >= 0){
                if(j>=questions.size()){
                    i=questions[j][1];
                    j=0;
                    break;
                }
                cout << j;
                tmp+=questions[j][0];
                j=questions[j][1]+1;
                if(j> questions.size()){
                    if(tmp > max) max = tmp;
                    tmp = 0;
                    countk++;
                    j=countk;
                    cal--;
                }
            }
            i=questions[j][1];
            j=0;
        }
        cout << tmp << ":" << i << endl;
        if(i >= questions.size()){
            count++;
            i = count;
            if(tmp > max) max = tmp;
            tmp = 0;
        }
    }
    cout << max;
    return 0;
}