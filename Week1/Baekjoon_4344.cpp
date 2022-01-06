// v.assign(?, !) -> ?개의 원소를 !값으로 지정
// (double)(value) -> value값을 double로 type casting
// cout << fixed; cout.setf(ios::showpoint); cout.precision(?); -> ?자리까지 소수점 표시
// v.clear() -> ?개의 원소를 지워줌

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int p;
    int C;
    int students;
    double tmp;
    vector<double> average;
    vector<int> studentscore;
    cin >> C;

    for(int i = 0; i<C; i++){
        cin >> students; 
        double score = 0;
        studentscore.assign(students,0); // vector크기의 지정해주기!!!
        for(int j = 0; j < students; j++){
            cin >> studentscore[j]; // vector에 바로 원소 넣어주기!!!
            score+=studentscore[j]; 
            }
        score = score/students; 
        int studentc=0;
        for(int k = 0 ;k < students; k++){
            if(studentscore[k] > (score)) studentc++; 
        }
        tmp = ((double)studentc/(double)students)*100; // int/int는 Int형 데이터 특징 때문에 0으로 저장됨 꼭 double로 type casing할것!!!!!!!!!!!!!!
        average.push_back(tmp);
    }
    for(int i=0; i<average.size(); i++){
        cout << fixed; // 소수점으로 출력하기 위해서 fixed필요
        cout.setf(ios::showpoint); // 소수점 표기
        cout.precision(3); // 소수점 몇 자리까지
        cout << average[i] <<"%"<< endl;
    }
    studentscore.clear(); // vector에 크기를 지정해주었으므로 clear해줄 것. 원소 프리시켜주는 것 해주지 않으면 double free 런타임에러 뜸
    return 0;
}