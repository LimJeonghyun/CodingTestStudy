#include <iostream>
using namespace std;

int paper[2200][2200]; //3^7 = 2187
int result[3];

bool check(int row, int col, int n){
    int start = paper[row][col];

    for(int i=row; i<row+n; i++){
        for(int j=col; j<col+n; j++){
            if(start!=paper[i][j]) return false;
        }
    }
    return true;
}

void divide(int row, int col, int n){
    if(check(row, col, n)) result[paper[row][col]]++;
    else{
        int size = n/3; // N이 3의 배수이므로 3으로 계속 나눌 수 있음

        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                divide(row+size*i, col+size*j, size);
            }
        }
    }
}

int main(){
    int N;
    cin >> N;
    int tmp;

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> tmp;
            tmp++; // -1 0 1 -> 0 1 2로 표현
            paper[i][j]=tmp;
        }
    }

    divide(0,0,N);
    printf("%d\n%d\n%d\n", result[0], result[1], result[2]);
}