#include <stdio.h>

int main(void){
    int x=3;
    int y=1;
    int a = x;
    int b = y;
    while(b>0){
        if(b==1 || b==y){
            while(a>0){
                if(a==1 || a==x){
                    printf("o");
                }
                else{
                    printf("-");
                }
                a-=1;
            }
            printf("\n");
            a=x;
        }
        else{
            while(a>0){
                if(a==1 || a==x){
                    printf("|");
                }
                else{
                    printf(" ");
                }
                a-=1;
            }
            printf("\n");
            a=x;
        }
        b-=1;
    }
}