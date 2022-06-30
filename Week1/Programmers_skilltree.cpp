//1/5 복습!!!

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// "CBD"
// "BACDE"

int solution(string skill, vector<string> skill_trees){
    int answer = 0;
    int cur;
    for (int i =0; i<skill_trees.size(); i++){
        bool check = true;
        int next = 0;
        for(int j =0; j< skill_trees[i].size(); j++){
            cur = skill.find(skill_trees[i][j]); // skill안에 skill_trees문자열이 포함되는지 체크
            if (cur == -1){ // 없으면 -1 continue
                continue;
            }else{
                if(next++ != cur){ //next값과 index값이 같으면 true반환
                    check = false;
                    break;
                }
            }
        }
        if(check == true) answer ++;
    }
    return answer;
}


// Vector 개념 정리
// Vector 초기화
// vector<int> vec -> 비어있는 벡터 생성
// vector<int> vec(5) -> 5개의 원소를 0으로 초기화 
// vector<int> vec(5,3) > 5개의 원소를 3으로 초기화 
// vector<int>vec2(vec) -> vec을 복사하여 벡텇 생성

//Vector 입력받기
// 