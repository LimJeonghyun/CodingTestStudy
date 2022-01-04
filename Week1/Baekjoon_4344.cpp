#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int p;
    int size;
    int student;
    int studentc;
    double tmp;
    vector<double> average;
    vector<int> studentscore;
    cin >> size;

    for(int i = 0; i<size; i++){
        cin >> student;
        double score=0;
        for(int j = 0; j < student; j++){
            cin >> p;
            score+=p;
            studentscore.push_back(p);        
            }
        studentc=0;
        for(int j = 0 ;j < student; j++){
            if(studentscore[j] > (score/student)) studentc++; 
        }
        tmp = studentc/student*100;
        average.push_back(tmp);
    }
    for(int i=0; i<average.size(); i++){
        cout << average[i] <<"%"<< endl;
    }
    return 0;
}