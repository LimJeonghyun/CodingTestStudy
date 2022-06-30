// kmp문제

#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main(){
    string word, part;

    cin >> word >> part;

    // strstr 내장함수 사용한것
   if (strstr((char*)word.c_str(), (char*)part.c_str()) == NULL)
		cout << 0;
	else
		cout << 1;

    // kmp 알고리즘 사용한 것
    // KMP: 주어진 문자에 대한 failure function을 구하는 것이 필요
    // KMP란
        // KMP알골즘에서 mismatch 발생 시, 다음에 비교해야 할 pattern 상의 위치를 알려주는 함수
        // Failure Function F(j) : index[0] ~ index[j]까지 proper prefix와 proper suffix가 매치되는 최대 길이를 저장

    return 0;
}