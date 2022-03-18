#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

typedef struct node{
    string name;
    int K;
    int E;
    int M;
} score;


bool cmp(struct node A, struct node B){
    if (A.K > B.K) return true;

    else if (A.K == B.K){
        if(A.E < B.E) return true;
        else if(A.E==B.E) {
            if(A.M > B.M) return true;
            else if(A.M==B.M){
                if(A.name < B.name) return true;
            }
        }
    }
    return false;
}

// bool cmp(score s1, score s2) { //정렬 조건 
// 	if(s1.language == s2.language) {
// 		if(s1.English == s2.English) {
// 			if(s1.math == s2.math)
// 				return s1.name < s2.name;
// 			else
// 				return s1.math > s2.math;
// 			}
// 		else
// 			return s1.English < s2.English;
// 		}
// 	else
// 		return s1.language > s2.language;
// }

// node 사용
int main(){
    int N;
    cin >> N;

    node score[N];
    for(int i=0; i<N; i++){
        cin >> score[i].name >> score[i].K >> score[i].E >> score[i].M;
    }

    sort(score, score+N, cmp);

    for(int i=0; i<N; i++){
        cout << score[i].name << '\n';
    }
}